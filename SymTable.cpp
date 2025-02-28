#include "SymTable.h"
#include <fstream>
#include <cstring>
#include <sstream>
#include <string.h>
using namespace std;

vector<SymTable *> Scopes;
SymTable *current;
int errorCount = 0;
vector<pair<string, string>> params;
vector<pair<string, const char *>> call_params;
extern int yylineno;
char errorMsg[100];

void yyerror(const char *s)
{
    cout << "error:" << s << " at line: " << yylineno << endl;
}

SymTable *seek(const char *name)
{
    SymTable *temp;
    temp = current;
    while (temp != nullptr)
    {
        if (temp->existsId(name))
            return temp;
        temp = temp->GetMainScope();
    }
    return nullptr;
}

SymTable *seekScope(SymTable *curr)
{
    SymTable *temp, *last = nullptr;
    temp = curr;
    while (temp != nullptr)
    {
        last = temp;
        if (last->GetName() == "main")
            return last;
        temp = temp->GetMainScope();
    }
    return last;
}

void SymTable::addVar(const char *type, const char *name)
{

    IdInfo var(type, name, "var");
    ids[name] = var;
    if (strcmp(type, "Bool") == 0)
    {

        ids[name].value = 1;
    }
}

void SymTable::addFunc(const char *returnType, const char *name, vector<pair<string, string>> &params, string parentClass)
{
    IdInfo func(returnType, name, "func", params, parentClass);
    ids[name] = func;
}

void SymTable::addArray(const char *type, const char *name)
{
    IdInfo arr(type, name, "array");
    ids[name] = arr;
}

void SymTable::addClass(const char *name)
{
    IdInfo cls("class", name, "class");
    ids[name] = cls;
}

bool SymTable::existsId(const char *var)
{
    return ids.find(var) != ids.end();
}

void SymTable::printVars(std::ostream &out)
{

    for (auto &v : ids)
    {
        out << "name: " << v.first << " type: " << v.second.type;
        if (v.second.idType == "func")
        {
            out << " parameters: ";
            v.second.PrintParam(out);
            out << " parent class : " << v.second.parentClass << endl;
        }
        else
        {
            if (v.second.idType == "var")
            {
                if (v.second.type == "String")
                    out << " value: " << v.second.valString;
                else
                    out << " value: " << v.second.value;
            }
            out << endl;
        }
    }
}

bool SymTable::isDefined(const string &name)
{
    return ids.find(name) != ids.end();
}

string getType(const char *id)
{
    SymTable *scope;
    scope = seek(id);
    if (scope != nullptr)
    {
        IdInfo *Symbol = scope->getInfo(id);
        return Symbol->idType;
    }
    return "";
}

IdInfo *SymTable::getInfo(const char *id)
{
    std::string str(id);
    return &ids[id];
}

IdInfo *SymTable::getInfoString(const std::string &id)
{
    SymTable *Scope;
    const char *var = id.c_str();
    Scope = seek(var);
    if (Scope != nullptr)
    {
        auto it = Scope->ids.find(id);
        if (it != Scope->ids.end())
        {
            return &(it->second);
        }
    }
    return nullptr;
}
string getActualType(const char *id)
{
    SymTable *scope;
    scope = seek(id);
    if (scope != nullptr)
    {
        IdInfo *Symbol = scope->getInfo(id);
        return Symbol->type;
    }
    return "";
}

AST *NewNode(double val, NodeType t, AST *l, AST *r)
{
    AST *node = new AST(val, t, l, r);
    return node;
}

AST *NewNodeString(string val, NodeType t, AST *l, AST *r)
{
    AST *node = new AST(val, t, l, r);
    return node;
}

void SymTable::SetMainScope(SymTable *p)
{
    MainScope = p;
}

void SymTable::setValue(const char *id, double val)
{
    ids[id].value = val;
}

void SymTable::setValueString(const char *id, const char *val)
{
    ids[id].valString = val;
}

void SymTable::setValueArray(const char *id, int it, double val)
{
    ids[id].Array[it] = val;
}

string SymTable ::GetName()
{
    return name;
}

SymTable *SymTable ::GetMainScope()
{
    return MainScope;
}

SymTable::~SymTable()
{
    ids.clear();
}

void PrintAllScopes(std::ostream &out)
{
    for (auto elem : Scopes)
    {
        out << "Scope : ";
        out << elem->GetName();
        if (elem->GetMainScope() != nullptr)
        {
            out << " Parent: " << elem->GetMainScope()->GetName() << endl;
        }
        else
            out << endl;
        elem->printVars(out);
        out << endl;
    }
}

void Initialize()
{
    current = new SymTable("global");
    Scopes.push_back(current);
}

void AddScope(const char *name)
{
    SymTable *NewScope = new SymTable(name);
    Scopes.push_back(NewScope);
    NewScope->SetMainScope(current);
    current = NewScope;
}

void GoToMain()
{
    current = current->GetMainScope();
}

void Delete()
{
    delete current;
}

void CorrectProgram()
{
    if (errorCount == 0)
        cout << "The program is correct!" << endl;
}

void AddParam(const char *type, const char *name)
{
    params.push_back(make_pair(type, name));
}

void AddCallParam(const char *name)
{
    if (seek(name))
        call_params.push_back(make_pair(getActualType(name), name));
}
void AddCallParamInt(int name)
{
    string str = to_string(name);
    const char *stri = str.c_str();
    call_params.push_back(make_pair("Int", stri));
}
void AddCallParamFloat(float name)
{
    string str = to_string(name);
    const char *stri = str.c_str();
    call_params.push_back(make_pair("Float", stri));
}

vector<pair<string, string>> &GetParams()
{
    return params;
}
vector<pair<string, const char *>> &GetCallParams()
{
    return call_params;
}

void SetParams()
{
    params.clear();
}
void SetCallParams()
{
    call_params.clear();
}

string GetScopeName()
{
    return current->GetName();
}

void AddFunction(const char *Return, const char *name, vector<pair<string, string>> &params, string parent)
{
    if (!current->existsId(name))
    {
        current->addFunc(Return, name, params, parent);
    }
    else
    {
        errorCount++;
        strcpy(errorMsg, "Function ");
        strcat(errorMsg, name);
        strcat(errorMsg, " already defined");
        yyerror(errorMsg);
    }
}

void AddArray(const char *type, const char *name)
{
    if (!current->existsId(name))
    {
        current->addArray(type, name);
    }
    else
    {
        errorCount++;
        strcpy(errorMsg, "Array ");
        strcat(errorMsg, name);
        strcat(errorMsg, " already defined");
        yyerror(errorMsg);
    }
}

void mismatch(const char *e1, const char *e2, const char *op)
{
    errorCount++;
    // cout<<" "<<op1<<" "<<op2<<endl;
    strcpy(errorMsg, "The types of the operands");
    strcat(errorMsg, " do not match");
    yyerror(errorMsg);
}

void CheckTypes(AST *e1, AST *e2, const char *op)
{

    if (getTypeExpr(e1) != getTypeExpr(e2))
    {
        mismatch(e1->GetValueString().c_str(), e2->GetValueString().c_str(), op);
    }
}

void checkAssignExp(const char *left, AST *right)
{

    if (seek(left))
    {
        if (getActualType(left) != getTypeExpr(right))
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, left);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
    }
}

void checkAssignChar(const char *left)
{

    if (seek(left))
        if (getActualType(left) != "Char")
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, left);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
}

void checkAssignBool(const char *left)
{

    if (seek(left))
        if (getActualType(left) != "Bool")
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, left);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
}

void checkAssignStringLiteral(const char *left)
{

    if (seek(left))
        if (getActualType(left) != "String")
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, left);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
}

void checkNR(const char *val)
{
    if (seek(val))
        if (getActualType(val) != "Int")
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, val);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
}

void checkNR_FLOAT(const char *val)
{
    if (seek(val))
        if (getActualType(val) != "Float")
        {
            errorCount++;
            strcpy(errorMsg, "Assigned value to ");
            strcat(errorMsg, val);
            strcat(errorMsg, " doesn't have the same type");
            yyerror(errorMsg);
        }
}

void CheckFuncCallTypes(const char *name, vector<pair<string, const char *>> &params_call)
{
    for (int i = 0; i < params_call.size(); i++)
    {
        if (getActualType(name) != params_call[i].first)
        {
            errorCount++;
            strcpy(errorMsg, "Parameters don't match the function type in the function call");
            yyerror(errorMsg);
        }
    }
}

void AddClass(const char *name)
{
    if (!current->existsId(name))
    {
        current->addClass(name);
    }
    else
    {
        errorCount++;
        strcpy(errorMsg, "Class ");
        strcat(errorMsg, name);
        strcat(errorMsg, " already defined");
        yyerror(errorMsg);
    }
}

void AddVar(const char *type, const char *name)
{

    if (!current->existsId(name))
    {
        current->addVar(type, name);
    }
    else
    {
        errorCount++;
        strcpy(errorMsg, "Variable ");
        strcat(errorMsg, name);
        strcat(errorMsg, " already defined");
        yyerror(errorMsg);
    }
}

void AddVarFunc(vector<pair<string, string>> param)
{
    string type, name;
    for (auto elem : param)
    {
        type = elem.first;
        name = elem.second;
        AddVar(type.c_str(), name.c_str());
    }
}

void AddVarScope(SymTable *scope, const char *type, const char *name)
{
    scope->addVar(type, name);
}

void IdInfo::PrintParam(std::ostream &out)
{
    for (auto elem : ParamList)
    {
        out << elem.first << ' ';
    }
}

void check_ifDefined(const char *name, int tip)
{
    if (!seek(name))
    {
        errorCount++;
        if (tip == 1)
            strcpy(errorMsg, "Variable ");
        else if (tip == 2)
            strcpy(errorMsg, "Function ");
        else if (tip == 3)
            strcpy(errorMsg, "Array ");
        strcat(errorMsg, name);
        strcat(errorMsg, " wasn't defined");
        yyerror(errorMsg);
    }
}

void DeleteTree(AST *root)
{
    if (root == nullptr)
    {
        return;
    }
    DeleteTree(root->GetLeft());
    DeleteTree(root->GetRight());
    delete root;
}

void SetValue(const char *id, double val)
{
    current->setValue(id, val);
}

void SetValueString(const char *id, const char *val)
{
    current->setValueString(id, val);
}

void SetValueArray(const char *id, int it, double val)
{
    current->setValueArray(id, it, val);
}

SymTable *GetCurrentScope()
{
    return current;
}

double evaluate(AST *root)
{
    double leftVal, rightVal;
    AST *Left, *Right;
    Left = root->GetLeft();
    Right = root->GetRight();

    if (root != nullptr)
    {

        if (Left == nullptr && Right == nullptr)
        {
            if (root->GetType() == NodeType::STR || root->GetType() == NodeType::CHAR)
            {
                return 0;
            }
            else if (root->GetType() == NodeType::IDENTIFIER)
            {

                string var = root->GetValueString();
                IdInfo *info = current->getInfoString(var);
                if (info != nullptr)
                {
                    if (info->type == "String" || info->type == "Char")
                        return 0;
                    else
                    {

                        return info->value;
                    }
                }
            }
            else
            {

                return root->GetValue();
            }
        }
        else if (Left != nullptr && Right == nullptr)
        {
            string op = root->GetValueString();
            leftVal = evaluate(Left);
            if (op == "!")
                return (!leftVal);
        }
        else if (Left != nullptr && Right != nullptr)
        {

            leftVal = evaluate(Left);
            rightVal = evaluate(Right);
            string op = root->GetValueString();
            if (op == "!")
                return (!leftVal);
            if (op == "+")
                return leftVal + rightVal;
            if (op == "-")
                return leftVal - rightVal;
            if (op == "*")
                return leftVal * rightVal;
            if (op == "/")
            {
                if (rightVal == 0)
                    ;
                return leftVal / rightVal;
            }
            if (op == "&&")
                return leftVal && rightVal;
            if (op == "||")
                return leftVal || rightVal;
            if (op == "==")
                return leftVal == rightVal;
            if (op == "!=")
                return leftVal != rightVal;
            if (op == "<=")
                return leftVal <= rightVal;
            if (op == ">=")
                return leftVal >= rightVal;
            if (op == "<")
                return leftVal < rightVal;
            if (op == ">")
            {

                return leftVal > rightVal;
            }
        }
    }

    return INT_MAX;
}

string getTypeExpr(AST *root)
{
    AST *Left, *Right;
    string leftType, rightType;
    if (root != nullptr)
    {
        Left = root->GetLeft();
        Right = root->GetRight();
        if (root->GetType() == NodeType::INT)
            return "Int";
        if (root->GetType() == NodeType::FLOAT)
            return "Float";
        if (root->GetType() == NodeType::BOOL)
            return "Bool";
        if (root->GetType() == NodeType::CHAR)
            return "Char";
        if (root->GetType() == NodeType::STR)
            return "Char";
        if (root->GetType() == NodeType::IDENTIFIER)
        {
            string var = root->GetValueString();
            SymTable *Scope = seek(var.c_str());

            IdInfo *info = Scope->getInfoString(var);
            if (info != nullptr)
            {
                // cout << info->type << endl;
                return info->type;
            }
        }
        if (root->GetType() == NodeType::OPERATOR)
        {

            if (Left != nullptr && Right == nullptr)
            {
                leftType = getTypeExpr(Left);
                return leftType;
            }
            else if (Left != nullptr && Right != nullptr)
            {
                leftType = getTypeExpr(Left);
                rightType = getTypeExpr(Right);
                string op = root->GetValueString();
                if (op == "+" || op == "-" || op == "*" || op == "%" || op == "/" || op == "&&" || op == "||")
                {
                    if (leftType == rightType)
                        return leftType;
                    return "";
                }
                else if (op == "==" || op == "!=" || op == ">" || op == "<" || op == ">=" || op == "<=")
                {
                    {
                        if (leftType == rightType)
                            return "Bool";
                        return "";
                    }
                }
            }
        }
    }

    return "";
}

int getError()
{
    return errorCount;
}

AST *AST::GetLeft()
{
    return this->left;
}

AST *AST::GetRight()
{
    return this->right;
}

double AST::GetValue()
{
    return value;
}

string AST::GetValueString()
{
    return valueString;
}

NodeType AST::GetType()
{
    return type;
}

void AST::SetValue(double v)
{
    value = v;
}

void AST::SetValueString(string s)
{
    valueString = s;
}
