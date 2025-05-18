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
#define MAX_LEN 1024
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
#define NUM 268
#define FLOAT 269
#define CHAR_LIT 270
#define STRING_LIT 271
#define ident 272
#define INC 273
#define DEC 274
#define LAND 275
#define LOR 276
#define EQ 277
#define NEQ 278
#define GE 279
#define LE 280
#define LSHIFT 281
#define RSHIFT 282
#define ADDR 283
#define DEREFERENCE 284
#define TYPE_CAST 285
#define LOG_NOT 286
#define BIT_NOT 287
#define UMINUS 288
#define UPLUS 289
#define PREFIX 290
#define SUFFIX 291
#define FUNC_CALL 292
#define ARR_SUB 293
#define GROUP 294
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    5,    1,    1,    1,    2,    2,
    2,    2,    2,    2,    2,    2,    3,    3,    3,    3,
    4,    4,    4,    6,    6,    7,    7,    7,   12,   13,
   13,   14,   14,   15,   15,   16,   17,   17,   17,   17,
   18,   18,   19,   19,   20,   20,   20,   20,   21,   21,
   22,   22,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,   10,   10,   10,   10,   10,   11,   11,   11,
   11,   11,   11,
};
static const YYINT yylen[] = {                            2,
    0,    2,    2,    2,    3,    1,    2,    1,    1,    1,
    1,    1,    1,    2,    2,    1,    2,    1,    1,    1,
    1,    1,    1,    1,    3,    3,    1,    2,    3,    1,
    3,    2,    4,    3,    4,    3,    3,    3,    1,    1,
    4,    5,    3,    2,    4,    5,    2,    3,    2,    3,
    3,    1,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    1,    1,    2,    2,    2,    2,    2,    2,    4,
    2,    2,    1,    2,    2,    2,    2,    1,    1,    1,
    1,    1,    3,
};
static const YYINT yydefred[] = {                         1,
    0,   23,   18,   22,   21,   11,   12,   13,   20,    0,
    0,    0,    0,    8,   16,    0,    2,    3,    4,    7,
   14,   15,    0,    0,    0,    0,    0,    0,   17,    0,
    0,    0,    0,    0,    0,    5,    0,   29,    0,   88,
   89,   90,   91,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   72,    0,   83,    0,   44,    0,
    0,    0,   41,    0,    0,    0,   25,    0,   31,    0,
   87,   86,   76,   77,   79,   74,   75,   78,    0,    0,
   81,   82,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   84,   85,    0,    0,    0,   43,    0,   33,   42,
   28,   49,    0,    0,    0,   93,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   55,   56,   57,   35,    0,    0,    0,    0,
    0,    0,   50,   80,   45,    0,    0,    0,   36,   51,
   46,   38,   37,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  296,  257,  258,  259,  260,  261,  262,  263,  264,  265,
  266,  267,  297,  298,  299,  300,  301,  308,  314,  298,
  299,  299,  272,   42,  302,  303,  309,  310,  258,   61,
   91,   40,  311,  315,  272,   59,   44,   59,   44,  268,
  269,  270,  271,  272,  273,  274,   38,   43,   45,   42,
   40,   33,  126,  304,  305,  306,  307,  304,   41,  297,
  316,   61,   59,  315,  272,   42,  302,  272,  309,   40,
  311,  317,  305,  305,  272,  305,  305,  305,  297,  304,
  305,  305,   61,  275,  276,  124,   94,   38,  277,  278,
   60,   62,  279,  280,  281,  282,   43,   45,   42,   47,
   37,  273,  274,   93,  272,   42,   41,  123,  312,   59,
  272,   41,  304,  318,   41,   41,  304,  304,  304,  304,
  304,  304,  304,  304,  304,  304,  304,  304,  304,  304,
  304,  304,  304,  304,  304,  311,   44,  272,  304,  312,
  313,   44,   41,  305,  316,   44,   44,   44,  125,  318,
  316,  313,  313,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          1,
   60,   14,   15,   16,   17,   25,   26,  139,   55,   56,
   57,   18,   27,   28,   33,  140,  141,   19,   34,   61,
   72,  114,
};
static const YYINT yysindex[] = {                         0,
  410,    0,    0,    0,    0,    0,    0,    0,    0,  129,
   34,   34,   -2,    0,    0, -249,    0,    0,    0,    0,
    0,    0,   32, -252,  -33,    3,   -8,    9,    0,  694,
  694,  742,   31,   41,   63,    0,   16,    0, -162,    0,
    0,    0,    0,  -27,  694,  694, -158,  694,  694,  694,
  590,  694,  694,  163,    0, -242,    0,   59,    0,   17,
   75,    4,    0,   69,   68, -137,    0,   45,    0,  392,
    0,    0,    0,    0,    0,    0,    0,    0,  101,   70,
    0,    0,  694,  694,  694,  694,  694,  694,  694,  694,
  694,  694,  694,  694,  694,  694,  694,  694,  694,  694,
  694,    0,    0,   45,  102, -127,    0,  686,    0,    0,
    0,    0,   96,  106,  694,    0,  163,  270,  259,  124,
  224,  170,  320,  320,   28,   28,   28,   28,  281,  281,
  107,  107,    0,    0,    0,    0,  410,  111,  135,  115,
   26,  694,    0,    0,    0,  410,  686,  686,    0,    0,
    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -39,
  -14,  -12,    0,    0,    0,   13,    0,    0,    0,    0,
    0,    0,   -7,    0,    0,  104,    0,  109,    0,    0,
    0,    0,   46,    0,   65,    0,    0,    0,    0,    0,
    0,    0,    0,  -37,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   78,    0,    1,    0,    0,    0,    0,
    0,    0,    0,    0,   -7,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -26,  119,    0,    0,    0,    0,    0,
    0,    0,  133,    0,    0,    0,   25,  721,  892,  868,
  856,  852,  697,  845,  526,  554,  565,  593,  469,  517,
  418,  429,    0,    0,    0,    0,    0,  134,   51,   56,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
   40,  155,   38,    0,    0,  148,    0,  959,   33,    0,
    0,    0,  131,    0,  -30,  125,  -71,    0,  153,  -57,
    0,   47,
};
#define YYTABLESIZE 1168
static const YYINT yytable[] = {                         92,
   92,    6,    6,   92,   92,   92,   92,   92,   29,   92,
   34,   34,   70,   71,   34,   34,   34,   34,   34,   35,
   34,   92,   92,   92,   92,   36,    9,    9,   10,   10,
  102,  103,   34,   34,   34,   34,   27,   73,   73,   24,
   13,   73,   73,   73,   73,   73,   37,   73,   21,   22,
   38,   27,   39,   19,   19,   92,   92,   66,  106,   73,
   73,   73,   73,   31,  101,   71,   34,   34,   71,   99,
   97,   32,   98,  136,  100,  152,  153,   73,   74,  145,
   76,   77,   78,   71,   81,   82,   92,   92,  151,   32,
   79,   62,   30,   73,   73,  101,   88,   34,   34,   63,
   99,   97,   32,   98,   32,  100,  101,   88,   28,   68,
  116,   99,   97,   75,   98,  107,  100,   71,   91,   83,
   92,   26,   31,   28,   73,   73,  108,  110,   30,   91,
   83,   92,  101,   88,  111,   31,   26,   99,   97,  142,
   98,  115,  100,  101,  138,  137,  143,  144,   99,   71,
  149,  104,   87,  100,  146,   91,   83,   92,  148,   47,
  101,   88,   24,   87,   20,   99,   97,   30,   98,   69,
  100,  101,   88,   52,   48,   40,   99,   97,  147,   98,
   39,  100,   86,   91,   67,   92,  109,   64,  150,   87,
    0,    0,    0,   86,   91,   83,   92,    0,    0,  101,
   88,    0,    0,    0,   99,   97,  101,   98,    0,  100,
    0,   99,   97,    0,   98,    0,  100,   87,    0,   86,
    0,    0,   91,   83,   92,    0,    0,    0,   87,   91,
    0,   92,    6,    0,    0,   92,   92,   92,   92,   92,
   92,   92,   92,   92,   92,    0,   34,   34,   34,   34,
   34,   34,   34,   34,   34,   34,   87,    9,   86,   10,
  101,   88,    0,    0,    0,   99,   97,    0,   98,   23,
  100,    0,    0,    0,    0,   73,   73,   73,   73,   73,
   73,   73,   73,   91,   19,   92,   86,   65,  105,    0,
    2,    3,    4,    5,    0,  101,   88,    9,    0,    0,
   99,   97,    0,   98,    0,  100,  101,   88,   95,   96,
    0,   99,   97,    0,   98,    0,  100,  101,   91,    0,
   92,    0,   99,   97,    0,   98,    0,  100,    0,   91,
    0,   92,    0,   84,   85,   89,   90,   93,   94,   95,
   96,    0,    0,    0,   84,   85,   89,   90,   93,   94,
   95,   96,   87,    0,    0,    0,  101,    0,    0,    0,
    0,   99,   97,   87,   98,    0,  100,    0,    0,    0,
   84,   85,   89,   90,   93,   94,   95,   96,    0,   91,
    0,   92,   86,    0,    0,    2,    3,    4,    5,    6,
    7,    8,    9,   86,   11,   12,    0,    0,    0,    0,
   89,   90,   93,   94,   95,   96,    0,    0,    0,   84,
   85,   89,   90,   93,   94,   95,   96,    0,    0,    0,
    0,    0,    0,    0,   52,    0,    0,    0,    0,   47,
    0,   51,  112,   50,   48,    0,   49,   84,   85,   89,
   90,   93,   94,   95,   96,    0,   89,   90,   93,   94,
   95,   96,    0,    0,    0,   53,    0,    0,   53,    0,
   53,   53,   53,    0,    0,    0,   54,    0,    0,   54,
    0,   54,   54,   54,    0,    0,   53,   53,   53,   53,
    0,    0,    0,    0,    0,    0,    0,   54,   54,   54,
   54,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   89,   90,   93,   94,   95,   96,   69,    0,    0,   69,
   53,   53,   69,    0,    0,    0,    0,   53,    0,    0,
    0,   54,   54,    0,    0,    0,    0,   69,   69,   69,
   69,    0,    0,   84,    0,   89,   90,   93,   94,   95,
   96,   53,   53,    0,    0,    0,   89,   90,   93,   94,
   95,   96,   54,   54,   70,    0,    0,   70,    0,    0,
   70,   69,   69,   59,    0,    0,   59,    0,    0,   59,
    0,    0,    0,    0,    0,   70,   70,   70,   70,    0,
    0,    0,    0,    0,   59,   59,   59,   59,    0,    0,
    0,   58,   69,   69,   58,    0,    0,   58,   93,   94,
   95,   96,   60,    0,    0,   60,    0,    0,   60,   70,
   70,    0,   58,   58,   58,   58,    0,    0,   59,   59,
    0,    0,   52,   60,   60,   60,   60,   47,    0,   51,
   61,   50,   48,   61,   49,    0,   61,    0,    0,    0,
   70,   70,    0,    0,    0,    0,   58,   58,    0,   59,
   59,   61,   61,   61,   61,    0,    0,   60,   60,   40,
   41,   42,   43,   44,   45,   46,    2,    3,    4,    5,
    6,    7,    8,    9,   10,   11,   12,   58,   58,    0,
    0,    0,    0,    0,    0,   61,   61,    0,   60,   60,
    0,    0,   53,   53,   53,   53,   53,   53,   53,   53,
    0,    0,    0,   54,   54,   54,   54,   54,   54,   54,
   54,    0,    0,    0,    0,   53,   61,   61,   52,    0,
    0,    0,    0,   47,    0,   51,   52,   50,   48,    0,
   49,   47,    0,   51,   62,   50,   48,   62,   49,    0,
   62,    0,    0,   69,   69,   69,   69,   69,   69,   69,
   69,    0,    0,    0,    0,   62,    0,   62,    0,    0,
    0,   64,    0,    0,   64,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   64,
    0,   64,   59,    0,    0,    0,    0,    0,    0,   62,
   62,   70,   70,   70,   70,   70,   70,   70,   70,    0,
   59,   59,   59,   59,   59,   59,    0,    0,  108,    0,
    0,   53,    0,   64,    0,    0,    0,    0,    0,   53,
   62,   62,    0,    0,    0,    0,    0,    0,   58,   58,
   58,   58,   58,   58,    0,    0,    0,    0,    0,   60,
   60,   60,   60,   60,   60,   64,    2,    3,    4,    5,
    6,    7,    8,    9,   10,   11,   12,   40,   41,   42,
   43,   44,   45,   46,    0,    0,    0,   61,   61,   61,
   61,   61,   61,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   63,    0,    0,   63,    0,    0,   63,   68,
    0,    0,   68,    0,    0,   68,   67,    0,    0,   67,
    0,    0,    0,   63,    0,   63,    0,    0,   66,    0,
   68,   66,   68,    0,   67,    0,   67,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   66,    0,   66,    0,
    0,    0,   65,    0,    0,   65,    0,   63,   63,    0,
    0,    0,    0,    0,   68,   68,    0,    0,   67,   67,
   65,    0,   65,   40,   41,   42,   43,   44,   45,   46,
   66,   40,   41,   42,   43,   44,   45,   46,   63,   63,
    0,   62,   62,   62,   62,   68,   68,    0,    0,   67,
   67,    0,    0,    0,   65,    0,    0,    0,   54,   58,
    0,   66,   66,    0,    0,   64,   64,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   10,   11,   12,   80,
    0,    0,    0,    0,    0,    0,   65,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  113,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  117,  118,  119,  120,  121,  122,  123,  124,  125,
  126,  127,  128,  129,  130,  131,  132,  133,  134,  135,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  113,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   63,
   63,   63,   63,    0,    0,    0,   68,   68,    0,    0,
   67,   67,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   66,   66,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,
};
static const YYINT yycheck[] = {                         37,
   38,   41,   42,   41,   42,   43,   44,   45,  258,   47,
   37,   38,   40,   44,   41,   42,   43,   44,   45,  272,
   47,   59,   60,   61,   62,   59,   41,   42,   41,   42,
  273,  274,   59,   60,   61,   62,   44,   37,   38,   42,
    1,   41,   42,   43,   44,   45,   44,   47,   11,   12,
   59,   59,   44,   41,   42,   93,   94,   42,   42,   59,
   60,   61,   62,   91,   37,   41,   93,   94,   44,   42,
   43,   40,   45,  104,   47,  147,  148,   45,   46,  137,
   48,   49,   50,   59,   52,   53,  124,  125,  146,   44,
   51,   61,   61,   93,   94,   37,   38,  124,  125,   59,
   42,   43,   40,   45,   59,   47,   37,   38,   44,  272,
   41,   42,   43,  272,   45,   41,   47,   93,   60,   61,
   62,   44,   91,   59,  124,  125,  123,   59,   61,   60,
   61,   62,   37,   38,  272,   91,   59,   42,   43,   44,
   45,   41,   47,   37,  272,   44,   41,  115,   42,  125,
  125,   93,   94,   47,   44,   60,   61,   62,   44,   41,
   37,   38,   59,   94,   10,   42,   43,   59,   45,   39,
   47,   37,   38,   41,   41,  125,   42,   43,   44,   45,
  125,   47,  124,   60,   37,   62,   62,   35,  142,   94,
   -1,   -1,   -1,  124,   60,   61,   62,   -1,   -1,   37,
   38,   -1,   -1,   -1,   42,   43,   37,   45,   -1,   47,
   -1,   42,   43,   -1,   45,   -1,   47,   94,   -1,  124,
   -1,   -1,   60,   61,   62,   -1,   -1,   -1,   94,   60,
   -1,   62,  272,   -1,   -1,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  282,   -1,  273,  274,  275,  276,
  277,  278,  279,  280,  281,  282,   94,  272,  124,  272,
   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,  272,
   47,   -1,   -1,   -1,   -1,  275,  276,  277,  278,  279,
  280,  281,  282,   60,  272,   62,  124,  272,  272,   -1,
  257,  258,  259,  260,   -1,   37,   38,  264,   -1,   -1,
   42,   43,   -1,   45,   -1,   47,   37,   38,  281,  282,
   -1,   42,   43,   -1,   45,   -1,   47,   37,   60,   -1,
   62,   -1,   42,   43,   -1,   45,   -1,   47,   -1,   60,
   -1,   62,   -1,  275,  276,  277,  278,  279,  280,  281,
  282,   -1,   -1,   -1,  275,  276,  277,  278,  279,  280,
  281,  282,   94,   -1,   -1,   -1,   37,   -1,   -1,   -1,
   -1,   42,   43,   94,   45,   -1,   47,   -1,   -1,   -1,
  275,  276,  277,  278,  279,  280,  281,  282,   -1,   60,
   -1,   62,  124,   -1,   -1,  257,  258,  259,  260,  261,
  262,  263,  264,  124,  266,  267,   -1,   -1,   -1,   -1,
  277,  278,  279,  280,  281,  282,   -1,   -1,   -1,  275,
  276,  277,  278,  279,  280,  281,  282,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   33,   -1,   -1,   -1,   -1,   38,
   -1,   40,   41,   42,   43,   -1,   45,  275,  276,  277,
  278,  279,  280,  281,  282,   -1,  277,  278,  279,  280,
  281,  282,   -1,   -1,   -1,   38,   -1,   -1,   41,   -1,
   43,   44,   45,   -1,   -1,   -1,   38,   -1,   -1,   41,
   -1,   43,   44,   45,   -1,   -1,   59,   60,   61,   62,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   59,   60,   61,
   62,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  277,  278,  279,  280,  281,  282,   38,   -1,   -1,   41,
   93,   94,   44,   -1,   -1,   -1,   -1,  126,   -1,   -1,
   -1,   93,   94,   -1,   -1,   -1,   -1,   59,   60,   61,
   62,   -1,   -1,  275,   -1,  277,  278,  279,  280,  281,
  282,  124,  125,   -1,   -1,   -1,  277,  278,  279,  280,
  281,  282,  124,  125,   38,   -1,   -1,   41,   -1,   -1,
   44,   93,   94,   38,   -1,   -1,   41,   -1,   -1,   44,
   -1,   -1,   -1,   -1,   -1,   59,   60,   61,   62,   -1,
   -1,   -1,   -1,   -1,   59,   60,   61,   62,   -1,   -1,
   -1,   38,  124,  125,   41,   -1,   -1,   44,  279,  280,
  281,  282,   38,   -1,   -1,   41,   -1,   -1,   44,   93,
   94,   -1,   59,   60,   61,   62,   -1,   -1,   93,   94,
   -1,   -1,   33,   59,   60,   61,   62,   38,   -1,   40,
   38,   42,   43,   41,   45,   -1,   44,   -1,   -1,   -1,
  124,  125,   -1,   -1,   -1,   -1,   93,   94,   -1,  124,
  125,   59,   60,   61,   62,   -1,   -1,   93,   94,  268,
  269,  270,  271,  272,  273,  274,  257,  258,  259,  260,
  261,  262,  263,  264,  265,  266,  267,  124,  125,   -1,
   -1,   -1,   -1,   -1,   -1,   93,   94,   -1,  124,  125,
   -1,   -1,  275,  276,  277,  278,  279,  280,  281,  282,
   -1,   -1,   -1,  275,  276,  277,  278,  279,  280,  281,
  282,   -1,   -1,   -1,   -1,  126,  124,  125,   33,   -1,
   -1,   -1,   -1,   38,   -1,   40,   33,   42,   43,   -1,
   45,   38,   -1,   40,   38,   42,   43,   41,   45,   -1,
   44,   -1,   -1,  275,  276,  277,  278,  279,  280,  281,
  282,   -1,   -1,   -1,   -1,   59,   -1,   61,   -1,   -1,
   -1,   41,   -1,   -1,   44,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   59,
   -1,   61,   41,   -1,   -1,   -1,   -1,   -1,   -1,   93,
   94,  275,  276,  277,  278,  279,  280,  281,  282,   -1,
  275,  276,  277,  278,  279,  280,   -1,   -1,  123,   -1,
   -1,  126,   -1,   93,   -1,   -1,   -1,   -1,   -1,  126,
  124,  125,   -1,   -1,   -1,   -1,   -1,   -1,  275,  276,
  277,  278,  279,  280,   -1,   -1,   -1,   -1,   -1,  275,
  276,  277,  278,  279,  280,  125,  257,  258,  259,  260,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,  272,  273,  274,   -1,   -1,   -1,  275,  276,  277,
  278,  279,  280,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   38,   -1,   -1,   41,   -1,   -1,   44,   38,
   -1,   -1,   41,   -1,   -1,   44,   41,   -1,   -1,   44,
   -1,   -1,   -1,   59,   -1,   61,   -1,   -1,   41,   -1,
   59,   44,   61,   -1,   59,   -1,   61,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   59,   -1,   61,   -1,
   -1,   -1,   41,   -1,   -1,   44,   -1,   93,   94,   -1,
   -1,   -1,   -1,   -1,   93,   94,   -1,   -1,   93,   94,
   59,   -1,   61,  268,  269,  270,  271,  272,  273,  274,
   93,  268,  269,  270,  271,  272,  273,  274,  124,  125,
   -1,  275,  276,  277,  278,  124,  125,   -1,   -1,  124,
  125,   -1,   -1,   -1,   93,   -1,   -1,   -1,   30,   31,
   -1,  124,  125,   -1,   -1,  275,  276,   -1,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  266,  267,   51,
   -1,   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   70,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   83,   84,   85,   86,   87,   88,   89,   90,   91,
   92,   93,   94,   95,   96,   97,   98,   99,  100,  101,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  142,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  275,
  276,  277,  278,   -1,   -1,   -1,  275,  276,   -1,   -1,
  275,  276,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  275,  276,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  276,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 294
#define YYUNDFTOKEN 319
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'!'",0,
0,0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,
0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'","'|'","'}'","'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","SHORT_TYPE","INT_TYPE",
"LONG_TYPE","LONGLONG_TYPE","FLOAT_TYPE","DOUBLE_TYPE","VOID_TYPE","CHAR_TYPE",
"CONST","SIGNED","UNSIGNED","NUM","FLOAT","CHAR_LIT","STRING_LIT","ident","INC",
"DEC","LAND","LOR","EQ","NEQ","GE","LE","LSHIFT","RSHIFT","ADDR","DEREFERENCE",
"TYPE_CAST","LOG_NOT","BIT_NOT","UMINUS","UPLUS","PREFIX","SUFFIX","FUNC_CALL",
"ARR_SUB","GROUP","$accept","program","type","non_const","integer","int_size",
"scalar_decl","idents","single_ident","expression","unary_expr","posfix_expr",
"primary_expr","array_decl","arrays","single_array","array_shape","arr_content",
"list_contents","func_decl","func_cfg","paras","func_arg","args",
"illegal-symbol",
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
"expression : expression '>' expression",
"expression : expression '<' expression",
"expression : expression GE expression",
"expression : expression LE expression",
"expression : expression EQ expression",
"expression : expression NEQ expression",
"expression : expression LAND expression",
"expression : expression LOR expression",
"expression : expression '|' expression",
"expression : expression '^' expression",
"expression : expression '&' expression",
"expression : expression LSHIFT expression",
"expression : expression RSHIFT expression",
"expression : expression '=' expression",
"expression : unary_expr",
"unary_expr : posfix_expr",
"unary_expr : '+' unary_expr",
"unary_expr : '-' unary_expr",
"unary_expr : INC unary_expr",
"unary_expr : DEC unary_expr",
"unary_expr : '*' unary_expr",
"unary_expr : '&' ident",
"unary_expr : '(' type ')' unary_expr",
"unary_expr : '!' unary_expr",
"unary_expr : '~' unary_expr",
"posfix_expr : primary_expr",
"posfix_expr : posfix_expr INC",
"posfix_expr : posfix_expr DEC",
"posfix_expr : ident func_arg",
"posfix_expr : ident array_shape",
"primary_expr : NUM",
"primary_expr : FLOAT",
"primary_expr : CHAR_LIT",
"primary_expr : STRING_LIT",
"primary_expr : ident",
"primary_expr : '(' expression ')'",

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
#line 534 "parser.y"
 

int main(){
	yyparse(); 
	return 0; 
}

int yyerror(char *s) {
	fprintf(stderr, "%s\n", s); 
	return 0; 
}
#line 879 "y.tab.c"

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
#line 60 "parser.y"
	{ printf("%s", yystack.l_mark[0].tree); }
#line 1552 "y.tab.c"
break;
case 3:
#line 61 "parser.y"
	{printf("%s", yystack.l_mark[0].tree); }
#line 1557 "y.tab.c"
break;
case 4:
#line 62 "parser.y"
	{printf("%s", yystack.l_mark[0].tree); }
#line 1562 "y.tab.c"
break;
case 5:
#line 65 "parser.y"
	{
		/* combine the type and the id declaration(s)*/
		char buffer[1024];
		sprintf(buffer, "<scalar_decl>%s%s;</scalar_decl>", yystack.l_mark[-2].typeName, yystack.l_mark[-1].tree);
		yyval.tree = strdup(buffer);
	}
#line 1572 "y.tab.c"
break;
case 6:
#line 72 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1577 "y.tab.c"
break;
case 7:
#line 74 "parser.y"
	{
		char type_name[105]; 
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1586 "y.tab.c"
break;
case 8:
#line 79 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1591 "y.tab.c"
break;
case 9:
#line 81 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1596 "y.tab.c"
break;
case 10:
#line 82 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1601 "y.tab.c"
break;
case 11:
#line 83 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1606 "y.tab.c"
break;
case 12:
#line 84 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1611 "y.tab.c"
break;
case 13:
#line 85 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName; }
#line 1616 "y.tab.c"
break;
case 14:
#line 87 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1625 "y.tab.c"
break;
case 15:
#line 93 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1634 "y.tab.c"
break;
case 16:
#line 98 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1639 "y.tab.c"
break;
case 17:
#line 102 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].typeName); 
		yyval.typeName = strdup(type_name); 
	}
#line 1648 "y.tab.c"
break;
case 18:
#line 107 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1653 "y.tab.c"
break;
case 19:
#line 108 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1658 "y.tab.c"
break;
case 20:
#line 109 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1663 "y.tab.c"
break;
case 21:
#line 111 "parser.y"
	{
		char type_name[105];
		sprintf(type_name, "longlong"); 
		yyval.typeName = strdup(type_name);
	}
#line 1672 "y.tab.c"
break;
case 22:
#line 116 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1677 "y.tab.c"
break;
case 23:
#line 117 "parser.y"
	{yyval.typeName = yystack.l_mark[0].typeName;}
#line 1682 "y.tab.c"
break;
case 24:
#line 118 "parser.y"
	{ yyval.tree = yystack.l_mark[0].tree; }
#line 1687 "y.tab.c"
break;
case 25:
#line 120 "parser.y"
	{
			char buffer[1024];
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer);
		}
#line 1696 "y.tab.c"
break;
case 26:
#line 129 "parser.y"
	{
			char buffer[1024];
			sprintf(buffer, "%s=%s", yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer);
		}
#line 1705 "y.tab.c"
break;
case 27:
#line 135 "parser.y"
	{
			yyval.tree = yystack.l_mark[0].idName;
		}
#line 1712 "y.tab.c"
break;
case 28:
#line 139 "parser.y"
	{
			char buffer[1024]; 
			sprintf(buffer, "*%s", yystack.l_mark[0].idName); 
			yyval.tree = strdup(buffer); 
		}
#line 1721 "y.tab.c"
break;
case 29:
#line 148 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<array_decl>%s%s;</array_decl>", yystack.l_mark[-2].typeName, yystack.l_mark[-1].tree); 
			yyval.tree = buffer; 
		}
#line 1730 "y.tab.c"
break;
case 30:
#line 155 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1735 "y.tab.c"
break;
case 31:
#line 157 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1744 "y.tab.c"
break;
case 32:
#line 165 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", yystack.l_mark[-1].idName, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1753 "y.tab.c"
break;
case 33:
#line 171 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s=%s", yystack.l_mark[-3].idName, yystack.l_mark[-2].tree, yystack.l_mark[0].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1762 "y.tab.c"
break;
case 34:
#line 179 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]", yystack.l_mark[-1].tree); 
			yyval.tree = strdup(buffer); 
		}
#line 1771 "y.tab.c"
break;
case 35:
#line 185 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "[%s]%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1780 "y.tab.c"
break;
case 36:
#line 193 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "{%s}", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1789 "y.tab.c"
break;
case 37:
#line 201 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1798 "y.tab.c"
break;
case 38:
#line 207 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1807 "y.tab.c"
break;
case 39:
#line 212 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1812 "y.tab.c"
break;
case 40:
#line 213 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1817 "y.tab.c"
break;
case 41:
#line 218 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s%s%s;</func_decl>", yystack.l_mark[-3].typeName, yystack.l_mark[-2].idName, yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1826 "y.tab.c"
break;
case 42:
#line 224 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "<func_decl>%s*%s%s;</func_decl>", yystack.l_mark[-4].typeName, yystack.l_mark[-2].idName, yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1835 "y.tab.c"
break;
case 43:
#line 233 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer);
		}
#line 1844 "y.tab.c"
break;
case 44:
#line 239 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			yyval.tree = strdup(buffer);
		}
#line 1853 "y.tab.c"
break;
case 45:
#line 247 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s,%s", yystack.l_mark[-3].typeName, yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1862 "y.tab.c"
break;
case 46:
#line 253 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s,%s", yystack.l_mark[-4].typeName, yystack.l_mark[-2].idName, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 	
		}
#line 1871 "y.tab.c"
break;
case 47:
#line 259 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s%s", yystack.l_mark[-1].typeName, yystack.l_mark[0].idName);
			yyval.tree = strdup(buffer); 	
		}
#line 1880 "y.tab.c"
break;
case 48:
#line 265 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s*%s", yystack.l_mark[-2].typeName, yystack.l_mark[0].idName);
			yyval.tree = strdup(buffer); 	
		}
#line 1889 "y.tab.c"
break;
case 49:
#line 274 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "()");
			yyval.tree = strdup(buffer); 	
		}
#line 1898 "y.tab.c"
break;
case 50:
#line 280 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "(%s)", yystack.l_mark[-1].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1907 "y.tab.c"
break;
case 51:
#line 288 "parser.y"
	{
			char buffer[MAX_LEN]; 
			sprintf(buffer, "%s,%s", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
			yyval.tree = strdup(buffer); 
		}
#line 1916 "y.tab.c"
break;
case 52:
#line 293 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 1921 "y.tab.c"
break;
case 53:
#line 297 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s+%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1930 "y.tab.c"
break;
case 54:
#line 303 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s-%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1939 "y.tab.c"
break;
case 55:
#line 309 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s*%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1948 "y.tab.c"
break;
case 56:
#line 315 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s/%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1957 "y.tab.c"
break;
case 57:
#line 321 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%s%%%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1966 "y.tab.c"
break;
case 58:
#line 327 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1975 "y.tab.c"
break;
case 59:
#line 333 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1984 "y.tab.c"
break;
case 60:
#line 339 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>=%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 1993 "y.tab.c"
break;
case 61:
#line 345 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<=%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2002 "y.tab.c"
break;
case 62:
#line 351 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s==%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2011 "y.tab.c"
break;
case 63:
#line 357 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s!=%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2020 "y.tab.c"
break;
case 64:
#line 363 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s&&%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2029 "y.tab.c"
break;
case 65:
#line 369 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s||%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2038 "y.tab.c"
break;
case 66:
#line 375 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s|%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2047 "y.tab.c"
break;
case 67:
#line 381 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s^%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2056 "y.tab.c"
break;
case 68:
#line 387 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s&%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2065 "y.tab.c"
break;
case 69:
#line 393 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s<<%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2074 "y.tab.c"
break;
case 70:
#line 399 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s>>%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2083 "y.tab.c"
break;
case 71:
#line 405 "parser.y"
	{
		char buffer[MAX_LEN];
		sprintf(buffer, "<expr>%s=%s</expr>", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2092 "y.tab.c"
break;
case 72:
#line 410 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 2097 "y.tab.c"
break;
case 73:
#line 414 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 2102 "y.tab.c"
break;
case 74:
#line 416 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>+%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2111 "y.tab.c"
break;
case 75:
#line 422 "parser.y"
	{	
		char buffer[1024];
		sprintf(buffer, "<expr>-%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2120 "y.tab.c"
break;
case 76:
#line 428 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>++%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2129 "y.tab.c"
break;
case 77:
#line 434 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>--%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer);
	}
#line 2138 "y.tab.c"
break;
case 78:
#line 440 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>*%s</expr>", yystack.l_mark[0].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 2147 "y.tab.c"
break;
case 79:
#line 446 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>&<expr>%s</expr></expr>", yystack.l_mark[0].idName); 
		yyval.tree = strdup(buffer); 
	}
#line 2156 "y.tab.c"
break;
case 80:
#line 452 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>(%s)%s</expr>", yystack.l_mark[-2].typeName, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 2165 "y.tab.c"
break;
case 81:
#line 458 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>!%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 2174 "y.tab.c"
break;
case 82:
#line 464 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>~%s</expr>", yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 2183 "y.tab.c"
break;
case 83:
#line 471 "parser.y"
	{yyval.tree = yystack.l_mark[0].tree;}
#line 2188 "y.tab.c"
break;
case 84:
#line 473 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s++</expr>", yystack.l_mark[-1].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 2197 "y.tab.c"
break;
case 85:
#line 479 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s--</expr>", yystack.l_mark[-1].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 2206 "y.tab.c"
break;
case 86:
#line 485 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr><expr>%s</expr>%s</expr>", yystack.l_mark[-1].idName, yystack.l_mark[0].tree); 
		yyval.tree = strdup(buffer); 
	}
#line 2215 "y.tab.c"
break;
case 87:
#line 491 "parser.y"
	{
		char buffer[MAX_LEN]; 
		sprintf(buffer, "<expr>%s%s</expr>", yystack.l_mark[-1].idName, yystack.l_mark[0].tree);
		yyval.tree = strdup(buffer); 
	}
#line 2224 "y.tab.c"
break;
case 88:
#line 499 "parser.y"
	{ 
		char buffer[1024];
		sprintf(buffer, "<expr>%d</expr>", yystack.l_mark[0].intVal);
		yyval.tree = strdup(buffer);
	}
#line 2233 "y.tab.c"
break;
case 89:
#line 505 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%f</expr>", yystack.l_mark[0].dVal);
		yyval.tree = strdup(buffer);
	}
#line 2242 "y.tab.c"
break;
case 90:
#line 511 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].char_const);
		yyval.tree = strdup(buffer);	
	}
#line 2251 "y.tab.c"
break;
case 91:
#line 517 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].string_const);
		yyval.tree = strdup(buffer);	
	}
#line 2260 "y.tab.c"
break;
case 92:
#line 523 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>%s</expr>", yystack.l_mark[0].idName);
		yyval.tree = strdup(buffer);
	}
#line 2269 "y.tab.c"
break;
case 93:
#line 529 "parser.y"
	{
		char buffer[1024];
		sprintf(buffer, "<expr>(%s)</expr>", yystack.l_mark[-1].tree);
		yyval.tree = strdup(buffer);
	}
#line 2278 "y.tab.c"
break;
#line 2280 "y.tab.c"
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
