#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <limits.h>

using namespace std;

class IdInfo
{
public:
    string idType;
    string type;
    string name;
    vector<double> Array;
    double value = 0;
    string valString = "";
    vector<pair<string, string>> ParamList;
    string parentClass;
    IdInfo() : Array(100) {}
    IdInfo(const char *type, const char *name, const char *idType, const string &parentClass = "") : type(type), name(name), idType(idType), parentClass(parentClass) {}
    IdInfo(const char *type, const char *name, const char *idType, vector<pair<string, string>> &param, const string &parentClass = "") : type(type), name(name), idType(idType), ParamList(param), parentClass(parentClass) {}
    void PrintParam(std::ostream &);
};

class SymTable
{
    map<string, IdInfo> ids;
    string name;
    SymTable *MainScope;

public:
    SymTable(const char *name) : name(name), MainScope(nullptr) {}
    bool existsId(const char *s);
    void addVar(const char *type, const char *name);
    void printVars(std::ostream &);
    void addFunc(const char *returnType, const char *name, vector<pair<string, string>> &params, string parentClass = "");
    void addArray(const char *type, const char *name);
    void addClass(const char *name);
    void SetMainScope(SymTable *p);
    void setValue(const char *, double);
    void setValueString(const char *, const char *);
    void setValueArray(const char *, int, double);
    bool isDefined(const string &name);
    IdInfo *getInfo(const char *);
    IdInfo *getInfoString(const std::string &);
    SymTable *GetMainScope();
    string GetName();
    ~SymTable();
};

enum class NodeType
{
    INT,
    FLOAT,
    BOOL,
    CHAR,
    STR,
    IDENTIFIER,
    OPERATOR
};

class AST
{
private:
    double value;
    string valueString;
    NodeType type;
    AST *left;
    AST *right;

public:
    AST(double val, NodeType t, AST *l, AST *r) : value(val), type(t), left(l), right(r) {};
    AST(string val, NodeType t, AST *l, AST *r) : valueString(val), type(t), left(l), right(r) {};
    AST *GetLeft();
    AST *GetRight();
    double GetValue();
    string GetValueString();
    NodeType GetType();
    void SetValue(double);
    void SetValueString(string);
};

void yyerror(const char *s);
void AddScope(const char *);
void GoToMain();
void PrintAllScopes(std::ostream &);
void Initialize();
void Delete();
void CorrectProgram();
void AddVar(const char *, const char *);
void AddVarFunc(vector<pair<string, string>>);
void AddVarScope(SymTable *, const char *, const char *);
void AddClass(const char *);
void CheckTypes(AST *, AST *, const char *);
void CheckFuncCallTypes(const char *name, vector<pair<string, const char *>> &params_call);
void checkAssignExp(const char *, AST *);
void checkAssignChar(const char *);
void checkAssignBool(const char *);
void checkAssignStringLiteral(const char *);
void checkNR(const char *);
void checkNR_FLOAT(const char *);
void AddParam(const char *, const char *);
void AddCallParam(const char *);
void AddCallParamInt(int);
void AddCallParamFloat(float);
void AddFunction(const char *, const char *, vector<pair<string, string>> &, string);
void AddArray(const char *, const char *);
vector<pair<string, string>> &GetParams();
vector<pair<string, const char *>> &GetCallParams();
void SetParams();
void SetCallParams();
string GetScopeName();
void check_ifDefined(const char *name, int);
void mismatch(const char *, const char *, const char *);
SymTable *seek(const char *name);
SymTable *seekScope(SymTable *);
string getType(const char *);
string getActualType(const char *);
AST *NewNode(double, NodeType, AST *, AST *);
AST *NewNodeString(string, NodeType, AST *, AST *);
void DeleteTree(AST *);
void SetValue(const char *, double);
void SetValueString(const char *, const char *);
void SetValueArray(const char *, int, double);
double evaluate(AST *);
SymTable *GetCurrentScope();
string getTypeExpr(AST *);
int getError();