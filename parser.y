%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
int yyerror(char *s);
#define MAX_LEN 1024
%}
%union {
	int intVal;
	double dVal; 
	char* char_const; 
	char* string_const; 
	char* idName; 
	char* typeName;  // renamed from 'type'
    char* tree;       // added for syntax tree
}
%token<typeName> SHORT_TYPE
%token<typeName> INT_TYPE
%token<typeName>  LONG_TYPE
%token<typeName>  LONGLONG_TYPE
%token<typeName>  FLOAT_TYPE
%token<typeName>  DOUBLE_TYPE
%token<typeName>  VOID_TYPE
%token<typeName>  CHAR_TYPE
%token<typeName>  CONST
%token<typeName>  SIGNED
%token<typeName>  UNSIGNED

%token<intVal> NUM '='
%token<dVal> FLOAT
%token<char_const> CHAR_LIT
%token<string_const> STRING_LIT
%token<idName> ident
%token INC DEC LAND LOR IF ELSE SWITCH CASE DEFAULT WHILE DO FOR RETURN BREAK CONTINUE
%type<typeName> type non_const integer int_size
%type<tree> scalar_decl idents single_ident expression unary_expr posfix_expr primary_expr array_decl arrays single_array array_shape arr_content list_contents func_decl func_cfg paras func_arg args func_def compound_stmt  stmts_decls decl stmt expr_stmt if_else_stmt switch_stmts switch_clauses switch_stmt while_stmt for_stmt opt_expr return_stmt break_stmt continue_stmt

%right '='
%left LOR 
%left LAND
%left '|'
%left '^'
%left '&'
%left EQ NEQ
%left '<' '>' GE LE
%left LSHIFT RSHIFT
%left '+' '-'
%left '*' '/' '%'
%right PREFIX UMINUS UPLUS LOG_NOT BIT_NOT TYPE_CAST DEREFERENCE ADDR  
%left SUFFIX FUNC_CALL ARR_SUB GROUP
%%

program: /* empty */
	| program scalar_decl 
		{	
			printf("%s", $2); 
		}
	| program array_decl 
		{
			printf("%s", $2); 
		} 
	| program func_decl 
		{
			printf("%s", $2); 
		}
	| program func_def 
	{
		printf("%s", $2);
	}
	;
scalar_decl: type idents ';' 
	{
		// combine the type and the id declaration(s)
		char buffer[1024];
		sprintf(buffer, "<scalar_decl>%s%s;</scalar_decl>", $1, $2);
		$$ = strdup(buffer);
	}
	;
type: CONST {$$ = $1;}
	| CONST non_const
	{
		
		char type_name[105]; 
		sprintf(type_name, "%s%s", $1, $2); 
		$$ = strdup(type_name); 
	}
	| non_const { $$ = $1;}
non_const: 
	SIGNED {$$ = $1; }
	| UNSIGNED {$$ = $1; }
	| FLOAT_TYPE {$$ = $1; }
	| DOUBLE_TYPE{$$ = $1; }
	| VOID_TYPE{$$ = $1; }
	| SIGNED integer 
	{
		char type_name[105];
		sprintf(type_name, "%s%s", $1, $2); 
		$$ = strdup(type_name); 
	}
	| UNSIGNED integer
	{
		char type_name[105];
		sprintf(type_name, "%s%s", $1, $2); 
		$$ = strdup(type_name); 
	}
	| integer {$$ = $1;} 

integer: 
	int_size INT_TYPE
	{
		char type_name[105];
		sprintf(type_name, "%s%s", $1, $2); 
		$$ = strdup(type_name); 
	}
	| INT_TYPE{$$ = $1;} 
	| int_size{$$ = $1;} 
	| CHAR_TYPE{$$ = $1;} 
int_size: 
	LONGLONG_TYPE{
		char type_name[105];
		sprintf(type_name, "longlong"); 
		$$ = strdup(type_name);
	} 
	| LONG_TYPE{$$ = $1;} 
	| SHORT_TYPE{$$ = $1;} 
idents: single_ident { $$ = $1; }
	| single_ident ',' idents 
		{
			char buffer[1024];
			sprintf(buffer, "%s,%s", $1, $3);
			$$ = strdup(buffer);
		}
	;

single_ident: 
	ident '=' expression 
		{
			char buffer[1024];
			sprintf(buffer, "%s=%s", $1, $3);
			$$ = strdup(buffer);
		}
	| ident
		{
			$$ = $1;
		}
	| '*' ident
		{
			char buffer[1024]; 
			sprintf(buffer, "*%s", $2); 
			$$ = strdup(buffer); 
		}
	;

array_decl: 
	type arrays ';'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<array_decl>%s%s;</array_decl>", $1, $2); 
			$$ = buffer; 
		}
	;
arrays: 
	single_array {$$ = $1;}
	| single_array ',' arrays 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", $1, $3); 
			$$ = strdup(buffer); 
		}
	;
single_array: 
	ident array_shape
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", $1, $2); 
			$$ = strdup(buffer); 
		} 
	| ident array_shape '=' arr_content 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s=%s", $1, $2, $4); 
			$$ = strdup(buffer); 
		}
	;
array_shape: 
	'[' expression ']' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]", $2); 
			$$ = strdup(buffer); 
		}
	| '[' expression ']' array_shape
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]%s", $2, $4);
			$$ = strdup(buffer); 
		}
	;
arr_content: 
	'{' list_contents '}'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "{%s}", $2);
			$$ = strdup(buffer); 
		}
	; 
list_contents: 
	arr_content ',' list_contents 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", $1, $3);
			$$ = strdup(buffer); 
		}
	| expression ',' list_contents
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", $1, $3);
			$$ = strdup(buffer); 
		}
	| arr_content	{$$ = $1;}
	| expression {$$ = $1;}  
	;

func_decl: 
	type ident func_cfg ';'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s%s%s;</func_decl>", $1, $2, $3);
			$$ = strdup(buffer); 	
		}
	| type '*' ident func_cfg ';'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s*%s%s;</func_decl>", $1, $3, $4);
			$$ = strdup(buffer); 	
		}	
	;

func_cfg: 
	'(' paras ')' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", $2);
			$$ = strdup(buffer);
		}
	| '(' ')' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			$$ = strdup(buffer);
		}
	;
paras: 
	type ident ',' paras 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s,%s", $1, $2, $4);
			$$ = strdup(buffer); 	
		}
	| type '*' ident ',' paras 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s,%s", $1, $3, $5);
			$$ = strdup(buffer); 	
		}
	| type ident 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", $1, $2);
			$$ = strdup(buffer); 	
		}
	| type '*' ident 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s", $1, $3);
			$$ = strdup(buffer); 	
		}
	;

func_arg: 
	'(' ')' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			$$ = strdup(buffer); 	
		}
	| '(' args ')' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", $2);
			$$ = strdup(buffer); 
		}
	; 
args: 
	expression ',' args
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", $1, $3);
			$$ = strdup(buffer); 
		}
	| expression {$$ = $1;}
	; 

func_def: 
	type ident func_cfg compound_stmt
		{
			
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_def>%s%s%s%s</func_def>", $1, $2, $3, $4);
			$$ = strdup(buffer);
		}
	| type '*' ident func_cfg compound_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_def>%s*%s%s%s</func_def>", $1, $3, $4, $5);
			$$ = strdup(buffer);
		}
	;
compound_stmt: 
	'{' stmts_decls '}' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "{%s}", $2);
			$$ = strdup(buffer);
		}
	| '{' '}'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "{}");
			$$ = strdup(buffer);
		}
	;
stmts_decls: 
	stmt stmts_decls
		{
			
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", $1, $2);
			$$ = strdup(buffer);
		}
	| decl stmts_decls
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", $1, $2);
			$$ = strdup(buffer);
		}
	| stmt 
		{ $$ = $1;}
	| decl 
		{$$ = $1;}
	;
decl: 
	scalar_decl
		{$$ = $1;}
	| array_decl
		{$$ = $1;}
	; 
stmt: 
	expr_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| if_else_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| switch_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| while_stmt 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| compound_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| for_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| return_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| break_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	| continue_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<stmt>%s</stmt>", $1);
			$$ = strdup(buffer);
		}
	; 
expr_stmt: 
	expression ';' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s;", $1);
			$$ = strdup(buffer);
		}
	; 
if_else_stmt:
	IF '(' expression ')' compound_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "if(%s)%s", $3, $5);
			$$ = strdup(buffer);
		}
	| IF '(' expression ')' compound_stmt ELSE compound_stmt
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "if(%s)%selse%s", $3, $5, $7);
			$$ = strdup(buffer);
		}
	;
switch_stmt: 
	SWITCH '(' expression ')' '{' switch_clauses '}'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "switch(%s){%s}", $3, $6);
			$$ = strdup(buffer);
		}
	| SWITCH '(' expression ')' '{'  '}'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "switch(%s){}", $3);
			$$ = strdup(buffer);
		}
	; 
switch_clauses: 
	CASE expression ':' switch_stmts switch_clauses
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "case%s:%s%s", $2, $4, $5);
			$$ = strdup(buffer);
		}
	| CASE expression ':' switch_clauses
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "case%s:%s", $2, $4);
			$$ = strdup(buffer);
		}
	| DEFAULT ':' switch_stmts switch_clauses
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "default:%s%s", $3, $4);
			$$ = strdup(buffer);
		}
	| DEFAULT ':' switch_clauses
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "default:%s", $3);
			$$ = strdup(buffer);
		}
	| CASE expression ':' switch_stmts 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "case%s:%s", $2, $4);
			$$ = strdup(buffer);
		}
	| CASE expression ':'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "case%s:", $2);
			$$ = strdup(buffer);
		}
	| DEFAULT ':' switch_stmts
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "default:%s", $3);
			$$ = strdup(buffer);
		}
	| DEFAULT ':'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "default:");
			$$ = strdup(buffer);
		}
	;
switch_stmts: 
	stmt switch_stmts
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", $1, $2);
			$$ = strdup(buffer);
		}
	| stmt 
		{$$ = $1;}
	;
while_stmt: 
	WHILE '(' expression ')' stmt 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "while(%s)%s", $3, $5);
			$$ = strdup(buffer);
		}
	| DO stmt WHILE '(' expression ')' ';'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "do%swhile(%s);", $2, $5);
			$$ = strdup(buffer);
		}
	; 

for_stmt: 
	FOR '(' opt_expr ';' opt_expr ';' opt_expr ')' stmt 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "for(%s;%s;%s)%s", $3, $5, $7, $9);
			$$ = strdup(buffer);
		}
	;
opt_expr: 
	/* empty */ {$$ = strdup("");}
	| expression {$$ = $1;}
	; 

return_stmt: 
	RETURN opt_expr ';'
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "return%s;", $2);
			$$ = strdup(buffer);
		}
	; 
break_stmt: 
	BREAK ';' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "break;");
			$$ = strdup(buffer);
		}
	; 
continue_stmt: 
	CONTINUE ';' 
		{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "continue;");
			$$ = strdup(buffer);
		}

expression: expression '+' expression 
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s+%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '-' expression 
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s-%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '*' expression 	
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s*%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '/' expression 
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s/%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '%' expression 
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s%%%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '>' expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '<' expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression GE expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>=%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression LE expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<=%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression EQ expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s==%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression NEQ expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s!=%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression LAND expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s&&%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression LOR expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s||%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '|' expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s|%s</expr>", $1, $3);
		$$ = strdup(buffer);
	} 
	| expression '^' expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s^%s</expr>", $1, $3);
		$$ = strdup(buffer);
	} 
	| expression '&' expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s&%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression LSHIFT expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<<%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression RSHIFT expression 
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>>%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| expression '=' expression
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s=%s</expr>", $1, $3);
		$$ = strdup(buffer);
	}
	| unary_expr {$$ = $1;}
	;

unary_expr: 
	posfix_expr {$$ = $1;}
	| '+' unary_expr %prec UPLUS
	{
		char buffer[1024];
		sprintf(buffer, "<expr>+%s</expr>", $2);
		$$ = strdup(buffer);
	}
	| '-' unary_expr %prec UMINUS
	{	
		char buffer[1024];
		sprintf(buffer, "<expr>-%s</expr>", $2);
		$$ = strdup(buffer);
	}
	| INC unary_expr %prec PREFIX
	{
		char buffer[1024];
		sprintf(buffer, "<expr>++%s</expr>", $2);
		$$ = strdup(buffer);
	}
	| DEC unary_expr %prec PREFIX
	{
		char buffer[1024];
		sprintf(buffer, "<expr>--%s</expr>", $2);
		$$ = strdup(buffer);
	}
	| '*' unary_expr %prec DEREFERENCE
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>*%s</expr>", $2); 
		$$ = strdup(buffer); 
	}
	| '&' unary_expr %prec ADDR
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>&%s</expr>", $2); 
		$$ = strdup(buffer); 
	}
	| '(' type ')' unary_expr %prec TYPE_CAST
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>(%s)%s</expr>", $2, $4);
		$$ = strdup(buffer); 
	}
	| '!' unary_expr %prec LOG_NOT
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>!%s</expr>", $2);
		$$ = strdup(buffer); 
	}
	| '~' unary_expr %prec BIT_NOT
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>~%s</expr>", $2);
		$$ = strdup(buffer); 
	}

posfix_expr: 
	primary_expr {$$ = $1;}
	| posfix_expr INC %prec SUFFIX
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s++</expr>", $1); 
		$$ = strdup(buffer); 
	}
	| posfix_expr DEC %prec SUFFIX
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s--</expr>", $1); 
		$$ = strdup(buffer); 
	}
	| posfix_expr func_arg %prec FUNC_CALL
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s%s</expr>", $1, $2); 
		$$ = strdup(buffer); 
	}
	| ident array_shape %prec ARR_SUB
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s%s</expr>", $1, $2);
		$$ = strdup(buffer); 
	}

primary_expr: 
	NUM 
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%d</expr>", $1);
		$$ = strdup(buffer);
	}
	| FLOAT
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%f</expr>", $1);
		$$ = strdup(buffer);
	}
	| CHAR_LIT
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", $1);
		$$ = strdup(buffer);	
	}
	| STRING_LIT
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", $1);
		$$ = strdup(buffer);	
	}
	| ident 
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", $1);
		$$ = strdup(buffer);
	}
	| '(' expression ')' %prec GROUP
	{
		char buffer[1024];
		sprintf(buffer, "<expr>(%s)</expr>", $2);
		$$ = strdup(buffer);
	}
%% 

int main(){
	yyparse(); 
	return 0; 
}

int yyerror(char *s) {
	fprintf(stderr, "%s\n", s); 
	return 0; 
}
