#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
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
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
