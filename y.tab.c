/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20221106

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
int yyerror(char *s);
#define MAX_LEN 1500
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 9 "parser.y"
typedef union YYSTYPE {
	int intVal;
	double dVal; 
	char* char_const; 
	char* string_const; 
	char* idName; 
	char* typeName;  /* renamed from 'type'*/
    char* tree;       /* added for syntax tree*/
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define SHORT_TYPE 257
#define INT_TYPE 258
#define LONG_TYPE 259
#define LONGLONG_TYPE 260
#define FLOAT_TYPE 261
#define DOUBLE_TYPE 262
#define VOID_TYPE 263
#define CHAR_TYPE 264
#define CONST 265
#define SIGNED 266
#define UNSIGNED 267
#define ID 268
#define NUM 269
#define FLOAT 270
#define CHAR_LIT 271
#define STRING_LIT 272
#define ident 273
#define INC 274
#define DEC 275
#define PRE_INC 276
#define PRE_DEC 277
#define DEREFERENCE 278
#define ADDR 279
#define TYPE_CAST 280
#define UMINUS 281
#define UPLUS 282
#define SUF_INC 283
#define SUF_DEC 284
#define FUNC_CALL 285
#define ARR_SUB 286
#define GROUP 287
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    5,    1,    1,    1,    2,    2,
    2,    2,    2,    2,    2,    2,    3,    3,    3,    3,
    4,    4,    4,    6,    6,    7,    7,    7,    9,   10,
   10,   11,   11,   12,   12,   13,   14,   14,   14,   14,
   15,   15,   16,   16,   17,   17,   17,   17,   18,   18,
   19,   19,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,
};
static const YYINT yylen[] = {                            2,
    0,    2,    2,    2,    3,    1,    2,    1,    1,    1,
    1,    1,    1,    2,    2,    1,    2,    1,    1,    1,
    1,    1,    1,    1,    3,    3,    1,    2,    3,    1,
    3,    2,    4,    3,    4,    3,    3,    3,    1,    1,
    4,    5,    3,    2,    4,    5,    2,    3,    2,    3,
    3,    1,    3,    3,    3,    3,    3,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    4,    1,    1,
    1,    1,    1,    3,
};
static const YYINT yydefred[] = {                         1,
    0,   23,   18,   22,   21,   11,   12,   13,   20,    0,
    0,    0,    0,    8,   16,    0,    2,    3,    4,    7,
   14,   15,    0,    0,    0,    0,    0,    0,   17,    0,
    0,    0,    0,    0,    0,    5,    0,   29,    0,   69,
   70,   71,   72,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   44,    0,    0,    0,   41,    0,    0,
    0,   25,    0,   31,   62,   63,    0,   67,   66,   60,
   61,   58,   59,   64,    0,    0,   65,    0,    0,    0,
    0,    0,    0,    0,    0,   43,    0,   33,   42,   28,
   49,    0,    0,    0,   74,    0,    0,   55,   56,   57,
   35,    0,    0,    0,    0,    0,    0,   50,   68,   45,
    0,    0,    0,   36,   51,   46,   38,   37,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  289,  257,  258,  259,  260,  261,  262,  263,  264,  265,
  266,  267,  290,  291,  292,  293,  294,  298,  304,  291,
  292,  292,  273,   42,  295,  296,  299,  300,  258,   61,
   91,   40,  301,  305,  273,   59,   44,   59,   44,  269,
  270,  271,  272,  273,  274,  275,   43,   45,   42,   40,
   38,  297,  297,   41,  290,  306,   61,   59,  305,  273,
   42,  295,  273,  299,  274,  275,   40,  301,  307,  273,
  273,  297,  297,  297,  290,  297,  273,   43,   45,   42,
   47,   37,   93,  273,   42,   41,  123,  302,   59,  273,
   41,  297,  308,   41,   41,  297,  297,  297,  297,  297,
  301,   44,  273,  297,  302,  303,   44,   41,  297,  306,
   44,   44,   44,  125,  308,  306,  303,  303,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          1,
   55,   14,   15,   16,   17,   25,   26,  104,   18,   27,
   28,   33,  105,  106,   19,   34,   56,   69,   93,
};
static const YYINT yysindex[] = {                         0,
  -97,    0,    0,    0,    0,    0,    0,    0,    0,  -84,
 -124, -124,    1,    0,    0, -257,    0,    0,    0,    0,
    0,    0,   19, -270,  -53,  -19,  -37,  -17,    0,  -14,
  -14,   20,   -6,    6,   71,    0,    2,    0, -173,    0,
    0,    0,    0,  -10, -157, -155,  -14,  -14,  -14,  -38,
 -153,  153,   46,    0,    3,   83,    8,    0,   69,   68,
 -136,    0,   50,    0,    0,    0,  -30,    0,    0,    0,
    0,    0,    0,    0,  101,   80,    0,  -14,  -14,  -14,
  -14,  -14,   50,  104, -123,    0,  -22,    0,    0,    0,
    0,   60,  108,  -14,    0,  -28,  -28,    0,    0,    0,
    0,  -97,  109,  144,  110,   27,  -14,    0,    0,    0,
  -97,  -22,  -22,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   -7,
   -5,   -3,    0,    0,    0,   -1,    0,    0,    0,    0,
    0,    0,  -27,    0,    0,   96,    0,   97,    0,    0,
    0,    0,   16,    0,   35,    0,    0,    0,    0,    0,
    0,    0,    0,   26,    0,    0,    0,    0,    0,    0,
    0,   40,    0,    0,    0,    0,    0,    0,    0,  -27,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    5,  116,    0,    0,    0,    0,    0,    0,
    0,  130,    0,    0,    0,   13,   33,    0,    0,    0,
    0,    0,  143,   67,   72,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
   32,  175,   75,    0,    0,  156,    0,   65,    0,  155,
    0,    7,  142,   -4,    0,  166,  -49,    0,   95,
};
#define YYTABLESIZE 287
static const YYINT yytable[] = {                         51,
   29,   50,   35,   49,   47,   36,   48,   51,   82,   50,
   91,   49,   47,   80,   48,   51,   27,   50,   81,   49,
   47,   38,   48,   51,   37,   50,   39,   49,   47,   67,
   48,   27,   13,    6,    6,    9,    9,   10,   10,   19,
   19,   34,   24,   61,   85,   34,   34,   34,   34,   34,
   68,   34,  110,   53,   57,   53,   53,   53,   32,   32,
   54,  116,   73,   34,   58,   34,   73,   73,   73,   73,
   73,   53,   73,   54,   32,   54,   54,   54,   28,   30,
   31,   75,   82,   26,   73,   21,   22,   80,   78,  101,
   79,   54,   81,   28,   52,   53,   82,   34,   26,   63,
   87,   80,   78,  107,   79,   53,   81,  117,  118,   31,
   32,   72,   73,   74,   76,   70,   82,   71,   73,   77,
   95,   80,   78,   86,   79,   54,   81,   89,   30,   34,
   87,   92,    2,    3,    4,    5,   90,   53,   83,    9,
   31,   94,   96,   97,   98,   99,  100,  102,  108,  103,
   73,  114,  111,  113,   24,   30,   47,   54,  109,    2,
    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,
   52,   92,    2,    3,    4,    5,    6,    7,    8,    9,
   82,   11,   12,   48,   20,   80,   78,  112,   79,   82,
   81,   40,   62,   64,   80,   78,   39,   79,   88,   81,
   59,  115,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   10,   11,   12,    0,
   40,   41,   42,   43,   44,   45,   46,    0,   40,   41,
   42,   43,   44,   45,   46,    0,   40,   41,   42,   43,
   44,   45,   46,    0,   40,   41,   42,   43,   44,   45,
   46,    0,    0,   65,   66,    6,    0,    9,    0,   10,
    0,   19,    0,   23,   60,   84,    2,    3,    4,    5,
    6,    7,    8,    9,   10,   11,   12,
};
static const YYINT yycheck[] = {                         38,
  258,   40,  273,   42,   43,   59,   45,   38,   37,   40,
   41,   42,   43,   42,   45,   38,   44,   40,   47,   42,
   43,   59,   45,   38,   44,   40,   44,   42,   43,   40,
   45,   59,    1,   41,   42,   41,   42,   41,   42,   41,
   42,   37,   42,   42,   42,   41,   42,   43,   44,   45,
   44,   47,  102,   41,   61,   43,   44,   45,   40,   44,
   41,  111,   37,   59,   59,   61,   41,   42,   43,   44,
   45,   59,   47,   41,   59,   43,   44,   45,   44,   61,
   91,   50,   37,   44,   59,   11,   12,   42,   43,   83,
   45,   59,   47,   59,   30,   31,   37,   93,   59,  273,
  123,   42,   43,   44,   45,   93,   47,  112,  113,   91,
   40,   47,   48,   49,   50,  273,   37,  273,   93,  273,
   41,   42,   43,   41,   45,   93,   47,   59,   61,  125,
  123,   67,  257,  258,  259,  260,  273,  125,   93,  264,
   91,   41,   78,   79,   80,   81,   82,   44,   41,  273,
  125,  125,   44,   44,   59,   59,   41,  125,   94,  257,
  258,  259,  260,  261,  262,  263,  264,  265,  266,  267,
   41,  107,  257,  258,  259,  260,  261,  262,  263,  264,
   37,  266,  267,   41,   10,   42,   43,   44,   45,   37,
   47,  125,   37,   39,   42,   43,  125,   45,   57,   47,
   35,  107,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  266,  267,   -1,
  269,  270,  271,  272,  273,  274,  275,   -1,  269,  270,
  271,  272,  273,  274,  275,   -1,  269,  270,  271,  272,
  273,  274,  275,   -1,  269,  270,  271,  272,  273,  274,
  275,   -1,   -1,  274,  275,  273,   -1,  273,   -1,  273,
   -1,  273,   -1,  273,  273,  273,  257,  258,  259,  260,
  261,  262,  263,  264,  265,  266,  267,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 287
#define YYUNDFTOKEN 309
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,
"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"error","SHORT_TYPE","INT_TYPE","LONG_TYPE","LONGLONG_TYPE",
"FLOAT_TYPE","DOUBLE_TYPE","VOID_TYPE","CHAR_TYPE","CONST","SIGNED","UNSIGNED",
"ID","NUM","FLOAT","CHAR_LIT","STRING_LIT","ident","INC","DEC","PRE_INC",
"PRE_DEC","DEREFERENCE","ADDR","TYPE_CAST","UMINUS","UPLUS","SUF_INC","SUF_DEC",
"FUNC_CALL","ARR_SUB","GROUP","$accept","program","type","non_const","integer",
"int_size","scalar_decl","idents","single_ident","expression","array_decl",
"arrays","single_array","array_shape","arr_content","list_contents","func_decl",
"func_cfg","paras","func_arg","args","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program :",
"program : program scalar_decl",
"program : program array_decl",
"program : program func_decl",
"scalar_decl : type idents ';'",
"type : CONST",
"type : CONST non_const",
"type : non_const",
"non_const : SIGNED",
"non_const : UNSIGNED",
"non_const : FLOAT_TYPE",
"non_const : DOUBLE_TYPE",
"non_const : VOID_TYPE",
"non_const : SIGNED integer",
"non_const : UNSIGNED integer",
"non_const : integer",
"integer : int_size INT_TYPE",
"integer : INT_TYPE",
"integer : int_size",
"integer : CHAR_TYPE",
"int_size : LONGLONG_TYPE",
"int_size : LONG_TYPE",
"int_size : SHORT_TYPE",
"idents : single_ident",
"idents : single_ident ',' idents",
"single_ident : ident '=' expression",
"single_ident : ident",
"single_ident : '*' ident",
"array_decl : type arrays ';'",
"arrays : single_array",
"arrays : single_array ',' arrays",
"single_array : ident array_shape",
"single_array : ident array_shape '=' arr_content",
"array_shape : '[' expression ']'",
"array_shape : '[' expression ']' array_shape",
"arr_content : '{' list_contents '}'",
"list_contents : arr_content ',' list_contents",
"list_contents : expression ',' list_contents",
"list_contents : arr_content",
"list_contents : expression",
"func_decl : type ident func_cfg ';'",
"func_decl : type '*' ident func_cfg ';'",
"func_cfg : '(' paras ')'",
"func_cfg : '(' ')'",
"paras : type ident ',' paras",
"paras : type '*' ident ',' paras",
"paras : type ident",
"paras : type '*' ident",
"func_arg : '(' ')'",
"func_arg : '(' args ')'",
"args : expression ',' args",
"args : expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : '+' expression",
"expression : '-' expression",
"expression : INC ident",
"expression : DEC ident",
"expression : ident INC",
"expression : ident DEC",
"expression : '*' expression",
"expression : '&' ident",
"expression : ident func_arg",
"expression : ident array_shape",
"expression : '(' type ')' expression",
"expression : NUM",
"expression : FLOAT",
"expression : CHAR_LIT",
"expression : STRING_LIT",
"expression : ident",
"expression : '(' expression ')'",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 415 "parser.y"

int main(){
	yyparse(); 
	return 0; 
}

int yyerror(char *s) {
	fprintf(stderr, "%s\n", s); 
	return 0; 
}
#line 560 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 2:
#line 45 "parser.y"
	{ printf("%s", yystack.l_mark[0].tree); }
#line 1233 "y.tab.c"
break;
case 3:
#line 46 "parser.y"
	{printf("%s", yystack.l_mark[0].tree); }
#line 1238 "y.tab.c"
break;
case 4:
#line 47 "parser.y"
	{printf("%s", yystack.l_mark[0].tree); }
#line 1243 "y.tab.c"
break;
case 5:
#line 50 "parser.y"
	{
		/* combine the type and the id declaration(s)*/
		char buffer[1024];
		sprintf(buffer, "<scalar_decl>%s%s;</scalar_decl>", yystack.l_mark[-2].typeName, yystack.l_mark[-1].tree);
		yyval.tree = strdup(buffer);
	}
#line 1253 "y.tab.c"
break;
case 6:
#line 57 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1258 "y.tab.c"
break;
case 7:
#line 59 "parser.y"
	{
		char type_name[105]; 
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1267 "y.tab.c"
break;
case 8:
#line 64 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1272 "y.tab.c"
break;
case 9:
#line 66 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1277 "y.tab.c"
break;
case 10:
#line 67 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1282 "y.tab.c"
break;
case 11:
#line 68 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1287 "y.tab.c"
break;
case 12:
#line 69 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1292 "y.tab.c"
break;
case 13:
#line 70 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1297 "y.tab.c"
break;
case 14:
#line 72 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1306 "y.tab.c"
break;
case 15:
#line 78 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1315 "y.tab.c"
break;
case 16:
#line 83 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1320 "y.tab.c"
break;
case 17:
#line 87 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1329 "y.tab.c"
break;
case 18:
#line 92 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1334 "y.tab.c"
break;
case 19:
#line 93 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1339 "y.tab.c"
break;
case 20:
#line 94 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1344 "y.tab.c"
break;
case 21:
#line 96 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "longlong"); 
		yyval.typeName = strdup(type_name);
	}
#line 1353 "y.tab.c"
break;
case 22:
#line 101 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1358 "y.tab.c"
break;
case 23:
#line 102 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1363 "y.tab.c"
break;
case 24:
#line 103 "parser.y"
	{ yyval.tree = yystack.l_mark[0].tree; }
#line 1368 "y.tab.c"
break;
case 25:
#line 105 "parser.y"
	{
			char buffer[1024];
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer);
		}
#line 1377 "y.tab.c"
break;
case 26:
#line 114 "parser.y"
	{
			char buffer[1024];
			sprintf(buffer, "%s=%s", yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer);
		}
#line 1386 "y.tab.c"
break;
case 27:
#line 120 "parser.y"
	{
			yyval.tree = yystack.l_mark[0].idName;
		}
#line 1393 "y.tab.c"
break;
case 28:
#line 124 "parser.y"
	{
			char buffer[1024]; 
			sprintf(buffer, "*%s", yystack.l_mark[0].idName); 
			yyval.tree = strdup(buffer); 
		}
#line 1402 "y.tab.c"
break;
case 29:
#line 133 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<array_decl>%s%s;</array_decl>", yystack.l_mark[-2].typeName, yystack.l_mark[-1].tree); 
			yyval.tree = buffer; 
		}
#line 1411 "y.tab.c"
break;
case 30:
#line 140 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1416 "y.tab.c"
break;
case 31:
#line 142 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1425 "y.tab.c"
break;
case 32:
#line 150 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", yystack.l_mark[-1].idName, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1434 "y.tab.c"
break;
case 33:
#line 156 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s=%s", yystack.l_mark[-3].idName, yystack.l_mark[-2].tree, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1443 "y.tab.c"
break;
case 34:
#line 164 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]", yystack.l_mark[-1].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1452 "y.tab.c"
break;
case 35:
#line 170 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1461 "y.tab.c"
break;
case 36:
#line 178 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "{%s}", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1470 "y.tab.c"
break;
case 37:
#line 186 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1479 "y.tab.c"
break;
case 38:
#line 192 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1488 "y.tab.c"
break;
case 39:
#line 197 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1493 "y.tab.c"
break;
case 40:
#line 198 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1498 "y.tab.c"
break;
case 41:
#line 203 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s%s%s;</func_decl>", yystack.l_mark[-3].typeName, yystack.l_mark[-2].idName, yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1507 "y.tab.c"
break;
case 42:
#line 209 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s*%s%s;</func_decl>", yystack.l_mark[-4].typeName, yystack.l_mark[-2].idName, yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1516 "y.tab.c"
break;
case 43:
#line 218 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer);
		}
#line 1525 "y.tab.c"
break;
case 44:
#line 224 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			yyval.tree = strdup(buffer);
		}
#line 1534 "y.tab.c"
break;
case 45:
#line 232 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s,%s", yystack.l_mark[-3].typeName, yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1543 "y.tab.c"
break;
case 46:
#line 238 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s,%s", yystack.l_mark[-4].typeName, yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1552 "y.tab.c"
break;
case 47:
#line 244 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].idName);
			yyval.tree = strdup(buffer); 	
		}
#line 1561 "y.tab.c"
break;
case 48:
#line 250 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s", yystack.l_mark[-2].typeName, yystack.l_mark[0].idName);
			yyval.tree = strdup(buffer); 	
		}
#line 1570 "y.tab.c"
break;
case 49:
#line 259 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			yyval.tree = strdup(buffer); 	
		}
#line 1579 "y.tab.c"
break;
case 50:
#line 265 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1588 "y.tab.c"
break;
case 51:
#line 273 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1597 "y.tab.c"
break;
case 52:
#line 278 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1602 "y.tab.c"
break;
case 53:
#line 282 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s+%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1611 "y.tab.c"
break;
case 54:
#line 288 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s-%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1620 "y.tab.c"
break;
case 55:
#line 294 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s*%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1629 "y.tab.c"
break;
case 56:
#line 300 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s/%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1638 "y.tab.c"
break;
case 57:
#line 306 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s%%%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1647 "y.tab.c"
break;
case 58:
#line 312 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>+%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1656 "y.tab.c"
break;
case 59:
#line 318 "parser.y"
	{	
		char buffer[1024];
		sprintf(buffer, "<expr>-%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1665 "y.tab.c"
break;
case 60:
#line 324 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>++<expr>%s</expr></expr>", yystack.l_mark[0].idName);
		yyval.tree = strdup(buffer);
	}
#line 1674 "y.tab.c"
break;
case 61:
#line 330 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>--<expr>%s</expr></expr>", yystack.l_mark[0].idName);
		yyval.tree = strdup(buffer);
	}
#line 1683 "y.tab.c"
break;
case 62:
#line 336 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr><expr>%s</expr>++</expr>", yystack.l_mark[-1].idName); 
		yyval.tree = strdup(buffer); 
	}
#line 1692 "y.tab.c"
break;
case 63:
#line 342 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr><expr>%s</expr>--</expr>", yystack.l_mark[-1].idName); 
		yyval.tree = strdup(buffer); 
	}
#line 1701 "y.tab.c"
break;
case 64:
#line 348 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>*%s</expr>", yystack.l_mark[0].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 1710 "y.tab.c"
break;
case 65:
#line 354 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>&<expr>%s</expr></expr>", yystack.l_mark[0].idName); 
		yyval.tree = strdup(buffer); 
	}
#line 1719 "y.tab.c"
break;
case 66:
#line 360 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr><expr>%s</expr>%s</expr>", yystack.l_mark[-1].idName, yystack.l_mark[0].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 1728 "y.tab.c"
break;
case 67:
#line 366 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s%s</expr>", yystack.l_mark[-1].idName, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 1737 "y.tab.c"
break;
case 68:
#line 372 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>(%s)%s</expr>", yystack.l_mark[-2].typeName, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 1746 "y.tab.c"
break;
case 69:
#line 378 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%d</expr>", yystack.l_mark[0].intVal);
		yyval.tree = strdup(buffer);
	}
#line 1755 "y.tab.c"
break;
case 70:
#line 384 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%f</expr>", yystack.l_mark[0].dVal);
		yyval.tree = strdup(buffer);
	}
#line 1764 "y.tab.c"
break;
case 71:
#line 390 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].char_const);
		yyval.tree = strdup(buffer);	
	}
#line 1773 "y.tab.c"
break;
case 72:
#line 396 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].string_const);
		yyval.tree = strdup(buffer);	
	}
#line 1782 "y.tab.c"
break;
case 73:
#line 402 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].idName);
		yyval.tree = strdup(buffer);
	}
#line 1791 "y.tab.c"
break;
case 74:
#line 408 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>(%s)</expr>", yystack.l_mark[-1].tree);
		yyval.tree = strdup(buffer);
	}
#line 1800 "y.tab.c"
break;
#line 1802 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
