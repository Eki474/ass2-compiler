#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <list>
#include "../binary.tab.hh"

#include <memory>

#ifndef NODE_H
#define NODE_H 
#include "../include/Node.h"
#endif
extern Node root;
extern "C" FILE* yyin;

#include "../include/ThreeAd.h"

#include "../include/Statement.h"
#include "../include/FunctionCall.h"
#include "../include/Function.h"
#include "../include/Args.h"
#include "../include/Expression.h"
#include "../include/Add.h"
#include "../include/Minus.h"
#include "../include/Mult.h"
#include "../include/Div.h"
#include "../include/Pow.h"
#include "../include/Modulo.h"
#include "../include/Concat.h"
#include "../include/Inf.h"
#include "../include/EInf.h"
#include "../include/Sup.h"
#include "../include/ESup.h"
#include "../include/Equals.h"
#include "../include/Diff.h"
#include "../include/And.h"
#include "../include/Or.h"
#include "../include/Constant.h"
#include "../include/Equality.h"
#include "../include/Variable.h"
#include "../include/ConstantString.h"
#include "../include/ConstantBool.h"
#include "../include/ConstantNull.h"
Statement* graph;

BBlock* cfg_tree(new BBlock());

void yy::parser::error(std::string const&err)
{
	std::cout << "It's one of the bad ones... " << err << std::endl;
}

Statement* evaluate(Node n)
{
	if(n.tag == "stmt")
		return new Statement(n);
	if(n.tag == "exp" && n.value == "")
		return new Expression(n);
	if(n.tag == "exp" && (n.value == "true" || n.value == "false"))
		return new ConstantBool(n);
	if(n.tag == "exp" && n.value == "nil")
		return new ConstantNull(n);
	if(n.tag == "functioncall")
		return new FunctionCall(n);
	if(n.tag == "function")
		return new Function(n);
	if(n.tag == "args")
		return new Args(n);
	if(n.tag == "binop" && n.value == "+")
		return new Add(n);
	if(n.tag == "binop" && n.value == "/")
		return new Div(n);
	if(n.tag == "binop" && n.value == "*")
		return new Mult(n);
	if(n.tag == "binop" && n.value == "-")
		return new Minus(n);
	if(n.tag == "binop" && n.value == "^")
		return new Pow(n);
	if(n.tag == "binop" && n.value == "%%")
		return new Modulo(n);
	if(n.tag == "binop" && n.tag == ".")
		return new Concat(n);
	if(n.tag == "binop" && n.value == "<")
		return new Inf(n);
	if(n.tag == "binop" && n.value == "i")
		return new EInf(n);
	if(n.tag == "binop" && n.value == ">")
		return new Sup(n);
	if(n.tag == "binop" && n.value == "s")
		return new ESup(n);
	if(n.tag == "binop" && n.value == "=")
		return new Equals(n);
	if(n.tag == "binop" && n.value == "~")
		return new Diff(n);
	if(n.tag == "binop" && n.value == "&")
		return new And(n);
	if(n.tag == "binop" && n.value == "|")
		return new Or(n);
	if(n.tag == "number")
		return new Constant(n);
	if(n.tag == "string")
		return new ConstantString(n);
	if(n.tag == "name")
		return new Variable(n);
	if(n.tag == "equals")
		return new Equality(n);
	if(n.tag == "for")
		return new For(n);
	return new Statement(n);
}

void buildTree(Statement* s, Node n)
{
	if(!n.children.empty())
	{
		for(Node i : n.children)
		{
			s->addChildren(evaluate(i));
			buildTree(s->getChildren().back(), i);
		}
	}
}

void convertThreeAd(Statement* s, BBlock* out)
{
	//make conditions here ? or in BBlock ?
    s->convert(out);
}

int main(int argc, char **argv)
{

//unique pointer example
    //std::unique_ptr<ThreeAd> test(new ThreeAd("_t2",'-',"4","2"));
    //std::cout << test->dump() << std::endl;

	if(argc == 2){
		yyin = fopen(argv[1], "r"); 
		yy::parser parser;
		if(!parser.parse()){
			fclose(yyin);
		}else std::cout << "error with lua file" << std::endl; 

		//root.dump();
		graph = evaluate(root);
		buildTree(graph, root);

		/*
			TODO: 
			buildTree for BBlock and ThreeAd 
			BBlock function member convertThreeAd(Statement* s)
			ThreeAd child classes 3Add, 3Minus.......
			function convertThreeAd in Semantic Tree to obtain the correct ThreeAd type
		*/
		
		convertThreeAd(graph, cfg_tree);

		std::ofstream myfile ("cfg.dot", std::ofstream::out);
			if (myfile.is_open()){
				myfile << "digraph{\n";
				cfg_tree->dumpCFG(myfile);
				myfile << "}";
				myfile.close();
			}else std::cout << "error with parsing output file" << std::endl;
	}
	return 0;
}


