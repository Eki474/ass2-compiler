%skeleton "lalr1.cc"
%defines 
%define api.value.type variant
%define api.token.constructor 
%code requires{
	#include "./include/Node.h"
	#include <string> 
	#include <sstream>
	#include <list>
	#include <iostream>
	//#define YYDEBUG 1
}
%code{ 
	#define YY_DECL yy::parser::symbol_type yylex() 
	extern FILE* yyin;
	YY_DECL; 
	Node root = *(new Node());
} 

%left <std::string> OR
%left <std::string> AND
%left <std::string> INF INFEQUALS SUP SUPEQUALS DBLEQUALS DIFF
%right <std::string> TWOPOINTS
%left <std::string> PLUS MINUS
%left <std::string> STAR DIV PERCENT
%left <std::string> NOT DIESE
%right <std::string> HAT

%token <std::string> WORD

%token <std::string> OPENACC
%token <std::string> CLOSEACC
%token <std::string> OPENRECT
%token <std::string> CLOSERECT
%token <std::string> OPENBRACKET
%token <std::string> CLOSEBRACKET

%token <std::string> STRING
%token <std::string> NUMBER

%token <std::string> SEMI

%token <std::string> IF
%token <std::string> THEN
%token <std::string> ELSEIF
%token <std::string> ELSE

%token <std::string> FOR
%token <std::string> IN
%token <std::string> WHILE
%token <std::string> DO

%token <std::string> REPEAT
%token <std::string> UNTIL

%token <std::string> FUNCTION
%token <std::string> LOCAL

%token <std::string> NIL

%token <std::string> BREAK
%token <std::string> RETURN
%token <std::string> ENDDING

%token <std::string> FALSE
%token <std::string> TRUE

%token <std::string> COMMA
%token <std::string> POINT
%token <std::string> DBLPOINTS

%token <std::string> EQUALS
%token <std::string> TREPOINTS


%type <Node> chunk
%type <Node> optsemi
%type <Node> block
%type <Node> optelseblock
%type <Node> stat
%type <Node> elseif
%type <Node> laststat
%type <Node> optlaststat
%type <Node> funcname
%type <Node> pointword
%type <Node> optname
%type <Node> varlist
%type <Node> var
%type <Node> namelist
%type <Node> explist
%type <Node> optexplist
%type <Node> optequalsexplist
%type <Node> exp
%type <Node> optexp
%type <Node> prefixexp
%type <Node> functioncall
%type <Node> args
%type <Node> function
%type <Node> funcbody
%type <Node> parlist
%type <Node> optparlist
%type <Node> optcommapoint
%type <Node> tableconstructor
%type <Node> fieldlist
%type <Node> fieldlistend
%type <Node> optfieldlist
%type <Node> field
%type <Node> fieldsep
%type <Node> optfieldsep
%type <Node> binop
%type <Node> unop

%token END 0 "end of file" 
%%

chunk 				: optlaststat 										{ $$ = Node("laststmt",""); 
																		  $$.children.push_back($1); 
																		  root = $$;
																		}
					| stat optsemi 			 							{ $$ = Node("stmt",""); 
																		  $$.children.push_back($1); 
																		  root = $$; 
																		}
					| chunk stat optsemi 								{ $$ = Node("stmt",""); 
																		  for(auto i=$1.children.begin(); i!=$1.children.end(); i++) 
																		  	$$.children.push_back(*i); 
																		  $$.children.push_back($2);
											  							  root = $$;
											  							}
					;

optsemi 			: /* empty */ 										{ $$ = Node("empty",""); }
					| SEMI 												{ $$ = Node(";",""); }
					;

block 				: chunk 											{ $$ = $1; }
					;

optelseblock 		: /* empty */ 										{ $$ = Node("empty",""); }
					| ELSE block 										{ $$ = Node("else",""); $$.children.push_back($2); }
					;

stat 				: varlist EQUALS explist 								{ $$ = Node("equals",""); 
																			  $$.children.push_back($1); 
																			  $$.children.push_back($3); 
																			}
					| functioncall 											{ $$ = Node("functioncall",""); $$.children.push_back($1); }
					| DO block ENDDING 										{ $$ = Node("do",""); $$.children.push_back($2); }
					| WHILE exp DO block ENDDING 							{ $$ = Node("while",""); 
																			  Node d = Node("do",""); 
																			  d.children.push_back($4); 
																			  $$.children.push_back($2); 
																			  $$.children.push_back(d); 
																			}
					| REPEAT block UNTIL exp 								{ $$ = Node("repeat",""); 
																			  Node u = Node("until",""); 
																			  u.children.push_back($4); 
																			  $$.children.push_back($2); 
																			  $$.children.push_back(u); 
																			}
					| IF exp THEN block elseif optelseblock ENDDING 		{ $$ = Node("if",""); 
																			  Node t = Node("then",""); 
																			  t.children.push_back($4); 
																			  $$.children.push_back($2);
																			  $$.children.push_back(t);
																			  $$.children.push_back($5);
																			  $$.children.push_back($6);
																			}
					| FOR WORD EQUALS exp COMMA exp optexp DO block ENDDING { $$ = Node("for",""); 
																			  Node n = Node("name",$2); 
																			  n.children.push_back($4); 
																			  n.children.push_back($6); 
																			  n.children.push_back($7); 
																			  Node d = Node("do",""); 
																			  d.children.push_back($9); 
																			  $$.children.push_back(n); 
																			  $$.children.push_back(d); 
																			}
					| FOR namelist IN explist DO block ENDDING 				{ $$ = Node("for",""); 
																			  Node i = Node("in",""); 
																			  i.children.push_back($2); 
																			  i.children.push_back($4); 
																			  Node d = Node("do",""); 
																			  d.children.push_back($6);
																			  $$.children.push_back(i); 
																			  $$.children.push_back(d); 
																			}
					| FUNCTION funcname funcbody 							{ $$ = Node("function",""); 
																			  $$.children.push_back($2); 
																			  $$.children.push_back($3); 
																			}
					| LOCAL FUNCTION WORD funcbody 							{ $$ = Node("local_function",""); 
																			  $$.children.push_back(Node("name",$3));
																			  $$.children.push_back($4); 
																			}
					| LOCAL namelist optequalsexplist 						{ $$ = Node("local",""); 
																			  Node e = Node("equals",""); 
																			  e.children.push_back($2); 
																			  e.children.push_back($3); 
																			  $$.children.push_back(e); 
																			}
					;

elseif 				: /* empty */ 										{ $$ = Node("empty",""); }
					| ELSEIF exp THEN block 							{ $$ = Node("elseif",""); 
																		  Node t = Node("then",""); 
																		  t.children.push_back($4); 
																		  $$.children.push_back($2); 
																		  $$.children.push_back(t); 
																		}
					| elseif ELSEIF exp THEN block 						{ if($1.tag != "elseiflist"){
																			$$ = Node("elseiflist",""); 
																			$$.children.push_back($1); 
																		  }else $$ = $1; 
																		  Node t = Node("then",""); 
																		  t.children.push_back($5);
																		  Node e = Node("elseif",""); 
																		  e.children.push_back($3); 
																		  e.children.push_back(t); 
																		  $$.children.push_back(e); 
																		}
					;

laststat 			: RETURN optexplist 								{ $$ = Node("return",""); $$.children.push_back($2); }
					| BREAK 											{ $$ = Node("break",""); }
					;

optlaststat 		: /* empty */ 										{ $$ = Node("empty",""); }
					| laststat optsemi 									{ $$ = $1; }
					;

funcname 			: WORD pointword optname 							{ $$ = Node("name",$1); 
																		  $$.children.push_back($2); 
																		  $$.children.push_back($3); 
																		}
					;

pointword 			: /* empty */ 										{ $$ = Node("empty",""); }
					| POINT WORD 										{ $$ = Node("name",$2); }
					| funcname POINT WORD 								{ $$ = $1; $$.children.push_back(Node("name",$3)); }
					;

optname 			: /* empty */ 										{ $$ = Node("empty",""); }
					| DBLPOINTS WORD 									{ $$ = Node("self",$2); }
					;

varlist 			: var 												{ $$ = $1; }
					| varlist COMMA var 								{ if($1.tag != "var"){
																			$$ = Node("var",""); 
																			$$.children.push_back($1); 
																		  } else $$ = $1; 
																		  $$.children.push_back($3); 
																		}
					;

var 				: WORD 												{ $$ = Node("name",$1); }
					| prefixexp OPENRECT exp CLOSERECT 					{ $$ = $1; 
																		  Node p = Node("position",""); 
																		  p.children.push_back($3); 
																		  $$.children.push_back(p); 
																		}
					| prefixexp POINT WORD 								{ $$ = $1; $$.children.push_back(Node("name",$3)); }
					; 

namelist 			: WORD 												{ $$ = Node("name",$1); }
					| namelist COMMA WORD 								{ if($1.tag != "namelist"){
																			$$ = Node("namelist",""); 
																			$$.children.push_back($1);
																		  }
																		  $$.children.push_back(Node("name",$3)); 
																		}
					;

explist 			: exp 												{ $$ = $1; }
					| explist COMMA exp 								{ if($1.tag != "explist"){
																			$$ = Node("explist",""); 
																			$$.children.push_back($1);
																		  }else $$ = $1;
																		  $$.children.push_back($3); 
																		}
					;

optexplist 			: /* empty */ 										{ $$ = Node("empty",""); }
					| explist 											{ $$ = $1; }
					;

optequalsexplist 	: /* empty */ 										{ $$ = Node("empty",""); }
					| EQUALS explist 									{ $$ = Node("equals",""); $$.children.push_back($2); }
					;

exp 				: NIL 												{ $$ = Node("exp",$1); }
					| FALSE 											{ $$ = Node("exp",$1); }
					| TRUE 												{ $$ = Node("exp",$1); }
					| NUMBER 											{ $$ = Node("number",$1); }
					| STRING 											{ $$ = Node("exp",""); 
																		  int size = $1.size()-2;
																		  $$.children.push_back(Node("string",$1.substr(1,size))); }
					| TREPOINTS 										{ $$ = Node("exp",$1); }
					| function 											{ $$ = Node("exp",""); $$.children.push_back($1); }
					| prefixexp 										{ $$ = Node("exp",""); $$.children.push_back($1); }
					| tableconstructor 									{ $$ = Node("exp",""); $$.children.push_back($1); }
					| binop 											{ $$ = $1; }
					| unop exp 											{ $$ = Node("exp",""); 
																		  $1.children.push_back($2); 
																		  $$.children.push_back($1);
																		}
					;

optexp 				: /* empty */ 										{ $$ = Node("empty",""); }
					| COMMA exp 										{ $$ = $2; }
					;

prefixexp 			: var 												{ $$ = $1; }
					| functioncall 										{ $$ = Node("functioncall",""); $$.children.push_back($1); }
					| OPENBRACKET exp CLOSEBRACKET 						{ $$ = $2; }
					;

functioncall 		: prefixexp args 									{ $$ = $1; $$.children.push_back($2); }
					| prefixexp DBLPOINTS WORD args 					{ $$ = $1; 
																		  Node m = Node("method", $3); 
																		  m.children.push_back($4); 
																		  $$.children.push_back(m); 
																		}
					;

args 				: OPENBRACKET optexplist CLOSEBRACKET 				{ $$ = Node("args",""); $$.children.push_back($2); }
					| tableconstructor 									{ $$ = Node("args",""); $$.children.push_back($1); }
					| STRING 											{ $$ = Node("args",""); 
																		  int size = $1.size()-2;
																		  $$.children.push_back(Node("string",$1.substr(1,size))); }
					;

function 			: FUNCTION funcbody 								{ $$ = Node("funcbody",""); 
																		  $$.children.push_back($2); 
																		}
					;

funcbody 			: OPENBRACKET optparlist CLOSEBRACKET block ENDDING { $$ = Node("body",""); 
																		  $$.children.push_back($2); 
																		  $$.children.push_back($4); 
																		}
					;

parlist 			: TREPOINTS 			 							{ $$ = Node("parlist", "..."); }
					| namelist optcommapoint 							{ $$ = Node("parlist", ""); 
																		  $$.children.push_back($1); 
																		  $$.children.push_back($2); 
																		}
					;

optparlist 			: /* empty */ 										{ $$ = Node("empty",""); }
					| parlist 											{ $$ = $1; }
					;

optcommapoint 		: /* empty */ 										{ $$ = Node("empty",""); }
					| COMMA TREPOINTS 									{ $$ = Node("three_points",""); }
					;

tableconstructor 	: OPENACC optfieldlist CLOSEACC 					{ $$ = Node("table",""); $$.children.push_back($2); }
					;

fieldlist 			: fieldlistend optfieldlist 						{ $$ = $1; }

fieldlistend 		: field 			 								{ $$ = $1; }
					| fieldlistend fieldsep field  						{ if($1.tag != "fieldlist"){
																			$$ = Node("fieldlist",""); 
																			$$.children.push_back($1); 
																		  }else $$ = $1;
																		  $$.children.push_back($3); 
																		}
					;

optfieldlist 		: /* empty */ 										{ $$ = Node("empty",""); }
					| fieldlist 										{ $$ = $1; }
					;

field 				: OPENACC exp CLOSEACC EQUALS exp 					{ $$ = $2; 
																		  Node e = Node("equals",""); 
																		  e.children.push_back($5); 
																		  $$.children.push_back(e); 
																		}
					| WORD EQUALS exp 									{ $$ = Node("name",$1);
																		  Node e = Node("equals",""); 
																		  e.children.push_back($3); 
																		  $$.children.push_back(e); 
																		}
					| exp 												{ $$ = $1; }
					;

fieldsep 			: COMMA 											{ $$ = Node(",",""); }
					| SEMI 												{ $$ = Node(";",""); }
					;

optfieldsep 		: /* empty */ 										{ $$ = Node("empty",""); }
					| fieldsep 											{ $$ = $1; }
					;

binop 				: exp PLUS exp 										{ 
																		 $$ = Node("binop","+"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp MINUS exp 									{ 
																		 $$ = Node("binop","-"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp STAR exp 										{ 
																		 $$ = Node("binop","*"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp DIV exp 										{ 
																		 $$ = Node("binop","/"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp HAT exp 										{ 
																		 $$ = Node("binop","^"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp PERCENT exp 									{ 
																		 $$ = Node("binop","%"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp TWOPOINTS exp 								{ 
																		 $$ = Node("binop","."); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp INF exp 										{ 
																		 $$ = Node("binop","<"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp INFEQUALS exp 								{ 
																		 $$ = Node("binop","i"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp SUP exp 										{ 
																		 $$ = Node("binop",">"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp SUPEQUALS exp 								{ 
																		 $$ = Node("binop","s"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp DBLEQUALS exp 								{ 
																		 $$ = Node("binop","="); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp DIFF exp 										{ 
																		 $$ = Node("binop","~"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp AND exp 										{ 
																		 $$ = Node("binop","&"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					| exp OR exp 										{ 
																		 $$ = Node("binop","|"); 
																		 $$.children.push_back($1);
																		 $$.children.push_back($3);
																		}
					;

unop 				: MINUS 											{ $$ = Node("unop","-"); }
					| NOT 												{ $$ = Node("unop","not"); }
					| DIESE 											{ $$ = Node("unop","#"); }
					;