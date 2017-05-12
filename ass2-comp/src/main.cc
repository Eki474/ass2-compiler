#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <list>
#include "../binary.tab.hh"

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
#include "../include/Constant.h"
#include "../include/Equality.h"
#include "../include/Variable.h"
Statement* graph;

BBlock* cfg_tree;

void yy::parser::error(std::string const&err)
{
	std::cout << "It's one of the bad ones... " << err << std::endl;
}

Statement* evaluate(Node n)
{
	if(n.tag == "stmt")
		return new Statement(n);
	if(n.tag == "functioncall")
		return new FunctionCall(n);
	if(n.tag == "name")
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
	if(n.tag == "number")
		return new Constant(n);
	if(n.tag == "var")
		return new Variable(n);
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

int main(int argc, char **argv)
{
	if(argc == 2){
		yyin = fopen(argv[1], "r"); 
		yy::parser parser;
		if(!parser.parse()){
			
			fclose(yyin);
		}else std::cout << "error with lua file" << std::endl; 

		graph = evaluate(root);
		buildTree(graph, root);

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


