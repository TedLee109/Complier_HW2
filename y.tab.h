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
