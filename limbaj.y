%{
#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylex();
%}
%union {
    char* string;
    int intval;
    float floatval;
    char ch;
    bool BOOL;
    class AST* NODE;
}
%token <string>  BGIN END ASSIGN GROUP VISIBILITY COLL AND OR EQ LE GE NE
%token <string> ID 
%token <ch> CHAR
%token <intval> NR
%token <floatval> NR_FLOAT
%token <string> TYPE 
%token <BOOL> TT FF
%token <string> IF THEN ELSE WHILE DO REPEAT UNTIL FOR TO CONS NO_RET RETURN  NEW THIS COMP
%token <string> PRINT TYPEOF
%token STRING_LITERAL 
%type <string> STRING_LITERAL
%type <NODE> aexp e bexp b expr Exp
%type <string> param
%type <string> function_type
%start progr


%nonassoc ELSE
%left ASSIGN
%left OR
%left AND
%left '!'
%left '<' '>' EQ LE GE NE
%left '+' '-' 
%left '*' '/' '%'
%%
progr :  class_section global_var global_func main {CorrectProgram();}
      |  global_var global_func main {CorrectProgram();}
      |  global_func main {CorrectProgram();}
      |  global_var main {CorrectProgram();}
      |  class_section main {CorrectProgram();}
      |  class_section global_var main {CorrectProgram();}
      |  class_section global_func main {CorrectProgram();}
      |  main {CorrectProgram();}
      ;

class_section : class
               | class_section class
               ;

class : GROUP ID '[' { AddClass($2); AddScope($2);     }
class_body  ']' ';' { GoToMain();}
      ;
    
class_body : data_members 
           | constructors 
           | function_members 
           | data_members constructors
           | data_members function_members 
           | data_members function_members constructors
           | data_members constructors function_members 
           | constructors data_members 
           | constructors function_members 
           | constructors data_members function_members 
           | function_members constructors
           | function_members constructors data_members
           ;


data_members : data ';'
             | data_members data ';'
             ;
constructors : constructor ';'
             | constructors constructor ';'
             ;

constructor : CONS ID '(' list_param ')' '{' list '}'
            | CONS ID '(' ')' '{' list '}'
            | CONS ID '(' ')' '{' '}'
            ;


data : VISIBILITY TYPE ID {AddVar($2, $3); }

     | VISIBILITY COLL '{' TYPE '}'  ID array {AddArray($4, $6);}

     | VISIBILITY ID ID {AddVar($2, $3);}

     ;

function_members : function ';'
                 | function ';' function_members
                 ;
to_return : ID
          | NR
          | NR_FLOAT
          | ID array
          | ID '.' ID
          | THIS '.' ID
          |'(' aexp ')'
          | '(' bexp ')'
          ;

function : VISIBILITY global_f

global_var : decl ';'     
	      |  global_var decl ';'
	      ;

global_func : global_f
            | global_func global_f
            ;
global_f : TYPE ID '(' list_param ')' '{' 
{
  AddFunction($1,$2, GetParams(), GetScopeName());
                            
     AddScope($2);    
        AddVarFunc(GetParams());     SetParams();
  
}
 list RETURN to_return ';' '}'
 { 
     GoToMain();
}
         | TYPE ID '(' list_param ')' '{' 
{   AddFunction($1,$2, GetParams(), GetScopeName());
     AddScope($2);       
        AddVarFunc(GetParams());  SetParams();  
}
         RETURN to_return ';' '}'
{
     GoToMain();
}
         | TYPE ID '(' ')' '{'
{ AddFunction($1,$2, GetParams(), GetScopeName());
    AddScope($2);   
}

          list RETURN to_return ';' '}'
 {
     GoToMain();
}
         | TYPE ID '(' ')' '{' 
{ AddFunction($1,$2, GetParams(), GetScopeName());
   AddScope($2);    
}
         RETURN to_return ';' '}'
{ 
     GoToMain();
}
         | NO_RET ID '(' list_param ')' '{' 
{ AddFunction("Null",$2, GetParams(), GetScopeName());
  AddScope($2);  
     AddVarFunc(GetParams());       SetParams();   
}
         list '}' {GoToMain();}

         | NO_RET ID '(' list_param ')' '{'
{ AddFunction("Null",$2, GetParams(), GetScopeName());
      AddScope($2);    
         AddVarFunc(GetParams());       SetParams();   
}
          '}'
{
       GoToMain();
}
         | NO_RET ID '(' ')' '{' 
{ AddFunction("Null",$2, GetParams(), GetScopeName());
      AddScope($2);       
}
         list '}'
{
     GoToMain();
}
         | NO_RET ID '(' ')' '{' 
{ AddFunction("Null",$2, GetParams(), GetScopeName());
     AddScope($2); 
}  '}'
{
       GoToMain();
}
         ;

list_param : param
            | list_param ','  param 
            ;

list_types : param_type
            | list_types ','  param_type
            ;
param_type : TYPE
           | ID
           | COLL '{' TYPE '}'  array
           ;
            
param : TYPE ID {AddParam($1, $2);}
      | COLL '{' TYPE '}'  array ID
      | ID ID {AddParam($1, $2);}
      | function_type
      ; 
      
list_param_call_cons : param_call_cons
            | list_param_call_cons ','  param_call_cons
            ;
            
param_call_cons : ID 
      | ID array
      | NR
      | NR_FLOAT  
      | ID '.' ID
      ; 
function_type : TYPE '(' ID ')' '('')' 
              | NO_RET '(' ID ')' '(' ')'
              | TYPE '(' ID ')' '(' list_types ')'
              | NO_RET '(' ID ')' '(' list_types ')'
              ;
list_param_call : param_call
                | list_param_call ',' param_call
                ;

param_call : ID {AddCallParam($1);}
      | ID array
      | NR {AddCallParamInt($1);}
      | NR_FLOAT  {AddCallParamFloat($1);}
      | ID '.' ID
      | '(' aexp ')'
      | '(' bexp ')'
      ;    

main : BGIN 
{    AddScope("main");
     
     
}

list END  
{     
   GoToMain();     
}
     ;
     

list :  statement 
     | list statement 
     ;

array : arr
      | arr array
      ;
arr : '[' NR ']'
    | '[' NR_FLOAT ']' 
    ;

create_object : ID '(' ')'
              | ID '(' list_param_call_cons ')'
              ;
new_object : NEW create_object
           ; 

 aexp : e      { if ($1 == nullptr) {} else $$=$1;}
      ;
e : e '+' e    { CheckTypes($1,$3, "+");  $$=NewNodeString("+", NodeType::OPERATOR, $1, $3);}
  | e '*' e    { CheckTypes($1,$3, "*");  $$=NewNodeString("*", NodeType::OPERATOR, $1, $3);}
  | e '-' e    {   CheckTypes($1,$3, "-");   $$=NewNodeString("-", NodeType::OPERATOR, $1, $3);}
  | e '/' e    {   CheckTypes($1,$3, "/");  $$=NewNodeString("/", NodeType::OPERATOR, $1, $3);}
  | e '%' e    {  CheckTypes($1,$3, "%");  $$=NewNodeString("%", NodeType::OPERATOR, $1, $3);}
  |'(' e ')'   { if ($2 == nullptr) {
  
} else $$=$2;}
  | ID    {  check_ifDefined($1, 1); $$=NewNodeString($1, NodeType::IDENTIFIER, nullptr, nullptr); }
  | ID array   { check_ifDefined($1, 3); $$=NewNodeString($1, NodeType::IDENTIFIER, nullptr, nullptr); }
  | NR    {  $$=NewNode($1, NodeType::INT, nullptr, nullptr); }
  | NR_FLOAT   { $$=NewNode($1, NodeType::FLOAT, nullptr, nullptr);  }
  | ID '.' ID   { check_ifDefined($1, 1); $$=NewNodeString($1, NodeType::IDENTIFIER, nullptr, nullptr); }
  ;
  

Exp:expr {if ($1 == nullptr) {} else $$=$1;}
   ;
expr: aexp {if ($1 == nullptr) {} else $$=$1;}
   | bexp {if ($1 == nullptr) {} else $$=$1;}
   ;
bexp : b {if ($1 == nullptr) {} else $$=$1; }
     ;
b : '!' b { $$=NewNodeString("!", NodeType::OPERATOR, $2, nullptr);}
  | b AND b {  $$=NewNodeString("&&", NodeType::OPERATOR, $1, $3);}
  | b OR b  {  $$=NewNodeString("||", NodeType::OPERATOR, $1, $3);}
  | b EQ b { $$=NewNodeString("==", NodeType::OPERATOR, $1, $3);}
  | b NE b { $$=NewNodeString("!=", NodeType::OPERATOR, $1, $3);}
  | aexp EQ TT { AST* n=NewNode($3, NodeType::BOOL, nullptr, nullptr); $$=NewNodeString("==", NodeType::OPERATOR, $1, n);}
  | aexp EQ FF { AST* n=NewNode($3, NodeType::BOOL, nullptr, nullptr); $$=NewNodeString("==", NodeType::OPERATOR, $1, n);}
  |'(' b ')' { if ($2 == nullptr) {} else $$=$2;}
  | aexp '<' aexp { $$=NewNodeString("<", NodeType::OPERATOR, $1, $3);}
  | aexp '>' aexp { $$=NewNodeString(">", NodeType::OPERATOR, $1, $3);}
  | aexp LE aexp { $$=NewNodeString("<=", NodeType::OPERATOR, $1, $3);}
  | aexp GE aexp { $$=NewNodeString(">=", NodeType::OPERATOR, $1, $3);}
  | aexp EQ aexp { $$=NewNodeString("==", NodeType::OPERATOR, $1, $3);}
  | aexp NE aexp { $$=NewNodeString("!=", NodeType::OPERATOR, $1, $3);}
  | aexp OR b { $$=NewNodeString("||", NodeType::OPERATOR, $1, $3);}
  | aexp AND b { $$=NewNodeString("&&", NodeType::OPERATOR, $1, $3);}
  | b OR aexp { $$=NewNodeString("||", NodeType::OPERATOR, $1, $3);}
  | b AND aexp { $$=NewNodeString("&&", NodeType::OPERATOR, $1, $3);}
  | TT  { $$=NewNode($1, NodeType::BOOL, nullptr, nullptr);}
  | FF { $$=NewNode($1, NodeType::BOOL, nullptr, nullptr);}
  ;

  


statement: decl ';'
         | Exp ';'
         | if_stmt
         | assign_stmt ';' 
         | while_stmt
         | repeat_until 
         | for_stmt
         | function_call
         ;
function_call : COMP ID '(' list_param_call ')' ';' {check_ifDefined($2, 2);  CheckFuncCallTypes($2, GetCallParams());
                                                       SetCallParams();}
               |  PRINT '(' Exp ')' ';' {string type=getTypeExpr($3); double res=evaluate($3); if(res!=INT_MAX && !getError()) {if(type!="Bool" ) cout<<res<<endl;
                 else {if(res==1) cout<<"true"<<endl; else cout<<"false"<<endl;}}
                }
               |  PRINT '(' STRING_LITERAL ')' ';' {cout<<$3<<endl;}
               |  TYPEOF '(' Exp ')' ';'  {string type=getTypeExpr($3); if(type!="") cout<<type<<endl; }
               |  TYPEOF '(' function ')' ';'
               |  TYPEOF '(' data ')' ';'
               ;
     
decl : TYPE ID
{
    
     AddVar($1, $2);
}
     | COLL '{' TYPE '}'  ID array {AddArray($3, $5);  }
     | COLL '{' TYPE '}'  ID array ASSIGN aexp {AddArray($3, $5); }
     | TYPE ID ASSIGN CHAR {AddVar($1, $2); checkAssignChar($1); SetValue($2, $4);}
     | TYPE ID ASSIGN STRING_LITERAL {AddVar($1, $2); checkAssignStringLiteral($1); SetValueString($2, $4);}
     | TYPE ID ASSIGN TT { AddVar($1, $2); checkAssignBool($1); SetValue($2, $4);}
     | TYPE ID ASSIGN FF { AddVar($1, $2); checkAssignBool($1); SetValue($2, $4);}
     | TYPE ID ASSIGN NR { AddVar($1, $2); checkNR($2); SetValue($2, $4); }
     | TYPE ID ASSIGN NR_FLOAT { AddVar($1, $2); checkNR_FLOAT($2); SetValue($2, $4);}
     | ID ID {AddVar($1, $2);}
     | ID ID ASSIGN new_object {AddVar($1, $2);}
     | ID ID ASSIGN ID  {AddVar($1, $2);}
     ;

assign_stmt : ID '[' NR ']' ASSIGN Exp {check_ifDefined($1, 3); checkAssignExp($1, $6); double res=evaluate($6); if(res!=INT_MAX) SetValueArray($1,$3,res);}
            | ID ASSIGN CHAR  {check_ifDefined($1, 1); checkAssignChar($1); SetValue($1, $3);}
            | ID ASSIGN STRING_LITERAL {check_ifDefined($1, 1); checkAssignStringLiteral($1); SetValueString($1, $3);}
            | ID ASSIGN Exp {check_ifDefined($1, 1); checkAssignExp($1, $3);double res=evaluate($3); if(res!=INT_MAX) SetValue($1,res);}
            ;

if_stmt : if_stmt_else
        | if_stmt_no_else
        ;

if_stmt_else : IF '(' bexp ')' THEN '{'
 list '}' 

 ELSE '{'
  list '}'

             ;

if_stmt_no_else : IF '(' bexp ')' '{'  {AddScope("block"); }
list '}' {GoToMain();}

        ;

while_stmt : WHILE '(' bexp ')' DO '{' 
{   AddScope("block");
      
} 
list '}'
{     GoToMain();
     
}
           ;

repeat_until : REPEAT '{' 
{
    AddScope("block");       
} 
list '}' UNTIL '(' bexp ')'
{      GoToMain();
     
}
             ;

for_stmt :  FOR '(' ID ASSIGN aexp TO aexp ')' DO '{' 
{
     AddScope("block");
}
list '}'
{     GoToMain();
     
}

         ;


%%

void print(const char* expr){
     cout << expr << endl;
}

int main(int argc, char** argv){
     Initialize();
     yyin=fopen(argv[1],"r");
   
     yyparse();
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Eroare la deschidere!" << std::endl;
    }
     PrintAllScopes(file);
     Delete();
} 