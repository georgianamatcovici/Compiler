%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap
%%
"Int"|"Float"|"Char"|"String"|"Bool" {yylval.string = strdup(yytext);return TYPE;}
"main" {return BGIN;}
"end" {return END;}
"Group" {return GROUP;}
"Collection" {return COLL;}
"&&" {return AND;}
"||" {return OR;}
"==" {return EQ;}
"!=" {return NE;}
"<=" {return LE;}
">=" {return GE;}
"true"  { yylval.intval = 1; return TT; }
"false" { yylval.intval = 0; return FF; }
"if" {return IF;}
"then" {return THEN;}
"else" {return ELSE;}
"while" {return WHILE;}
"do" {return DO;}
"repeat" {return REPEAT;}
"until" {return UNTIL;}
"for" {return FOR;}
"to" {return TO;}
"Constructor" {return CONS;}
"Null" {return NO_RET;}
"return" {return RETURN;}
"new" {return NEW;}
"Public"|"Private"|"Protected" {return VISIBILITY;}
"this" {return THIS;}
"compute" {return COMP;}
"print" { return PRINT;}
"typeOf" { return TYPEOF; }
'[^']' {  yylval.intval = (int)yytext[1]; return CHAR;}
\"[^\"]*\" { yylval.string = strdup(yytext); return STRING_LITERAL; }
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
"::=" {return ASSIGN;}
[0-9]+ {yylval.intval = atoi(yytext); return NR;}
[0-9]*\.[0-9]+ { 
 yylval.floatval = atof(yytext);  return NR_FLOAT; }
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}


