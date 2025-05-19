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
#define SWITCH 279
#define CASE 280
#define DEFAULT 281
#define WHILE 282
#define DO 283
#define FOR 284
#define EQ 285
#define NEQ 286
#define GE 287
#define LE 288
#define LSHIFT 289
#define RSHIFT 290
#define PREFIX 291
#define UMINUS 292
#define UPLUS 293
#define LOG_NOT 294
#define BIT_NOT 295
#define TYPE_CAST 296
#define DEREFERENCE 297
#define ADDR 298
#define SUFFIX 299
#define FUNC_CALL 300
#define ARR_SUB 301
#define GROUP 302
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
