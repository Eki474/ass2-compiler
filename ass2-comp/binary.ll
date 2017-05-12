%top{
#include "binary.tab.hh" 
#define YY_DECL extern yy::parser::symbol_type yylex() 
} 
%option noyywrap nounput batch noinput 
%x comment
%% 
--\[\[ 							BEGIN(comment);
<comment>[^\]]* 				/* munch */
<comment>\]\] 					BEGIN(INITIAL); 
(--[^\[].*\n) 					/* inline comments */
[{] 							{ return yy::parser::make_OPENACC(yytext); }
[}] 							{ return yy::parser::make_CLOSEACC(yytext); }
[\[]							{ return yy::parser::make_OPENRECT(yytext); }
[\]]							{ return yy::parser::make_CLOSERECT(yytext); }
[\(] 							{ return yy::parser::make_OPENBRACKET(yytext); }
[\)] 							{ return yy::parser::make_CLOSEBRACKET(yytext); }
(\"[^\"]*\") 					{ return yy::parser::make_STRING(yytext); }
([0-9]+\.?[0-9]*) 				{ return yy::parser::make_NUMBER(yytext); }
[;] 							{ return yy::parser::make_SEMI(yytext); }
(if) 							{ return yy::parser::make_IF(yytext); }
(then) 							{ return yy::parser::make_THEN(yytext); }
(elseif) 						{ return yy::parser::make_ELSEIF(yytext); }
(else) 							{ return yy::parser::make_ELSE(yytext); }
(for) 							{ return yy::parser::make_FOR(yytext); }
(in) 							{ return yy::parser::make_IN(yytext); }
(while) 						{ return yy::parser::make_WHILE(yytext); }
(do) 							{ return yy::parser::make_DO(yytext); }
(repeat) 						{ return yy::parser::make_REPEAT(yytext); }
(until) 						{ return yy::parser::make_UNTIL(yytext); }
(function) 						{ return yy::parser::make_FUNCTION(yytext); }
(local) 						{ return yy::parser::make_LOCAL(yytext); }
(and) 							{ return yy::parser::make_AND(yytext); }
(or) 							{ return yy::parser::make_OR(yytext); }
(nil) 							{ return yy::parser::make_NIL(yytext); }
(not) 							{ return yy::parser::make_NOT(yytext); }
(break) 						{ return yy::parser::make_BREAK(yytext); }
(return) 						{ return yy::parser::make_RETURN(yytext); }
(end) 							{ return yy::parser::make_ENDDING(yytext); }
(false) 						{ return yy::parser::make_FALSE(yytext); }
(true) 							{ return yy::parser::make_TRUE(yytext); }
(,)								{ return yy::parser::make_COMMA(yytext); }
(\.)							{ return yy::parser::make_POINT(yytext); }
(:)								{ return yy::parser::make_DBLPOINTS(yytext); }
(\.\.\.)						{ return yy::parser::make_TREPOINTS(yytext); }
[\n] 							/* new lines */
[ \t]+							/* spaces */
[=] 							{ return yy::parser::make_EQUALS(yytext); }
[\+] 							{ return yy::parser::make_PLUS(yytext); }
[-] 							{ return yy::parser::make_MINUS(yytext); }
[\*] 							{ return yy::parser::make_STAR(yytext); }
[\/] 							{ return yy::parser::make_DIV(yytext); }
[\^] 							{ return yy::parser::make_HAT(yytext); }
[\%] 							{ return yy::parser::make_PERCENT(yytext); }
(\.\.) 							{ return yy::parser::make_TWOPOINTS(yytext); }
[<] 							{ return yy::parser::make_INF(yytext); }
(<=) 							{ return yy::parser::make_INFEQUALS(yytext); }
[>] 							{ return yy::parser::make_SUP(yytext); }
(>=) 							{ return yy::parser::make_SUPEQUALS(yytext); }
(==) 							{ return yy::parser::make_DBLEQUALS(yytext); }
(~=) 							{ return yy::parser::make_DIFF(yytext); }
[#] 							{ return yy::parser::make_DIESE(yytext); }
([^\n=<>\+-\/\*"\(\)|\[\]#{}; \t$'\\']*(\\.)*)+ 	{ return yy::parser::make_WORD(yytext); }
<<EOF>> return yy::parser::make_END(); 
%%