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
#define IF 277
#define ELSE 278
#define EQ 279
#define NEQ 280
#define GE 281
#define LE 282
#define LSHIFT 283
#define RSHIFT 284
#define PREFIX 285
#define UMINUS 286
#define UPLUS 287
#define LOG_NOT 288
#define BIT_NOT 289
#define TYPE_CAST 290
#define DEREFERENCE 291
#define ADDR 292
#define SUFFIX 293
#define FUNC_CALL 294
#define ARR_SUB 295
#define GROUP 296
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
