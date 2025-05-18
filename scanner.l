%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
#define MAX_LINE_LENGTH 305
static int linecount = 0;
static int charcount = 0;
static char line[MAX_LINE_LENGTH]; 
static int token = 1; 
static int source = 1; 
void store(char *s) {
	if (charcount + strlen(s) >= MAX_LINE_LENGTH) {
		fprintf(stderr, "Line too long\n");
		exit(1);
	}
	strcpy(line + charcount, s); 
	charcount += strlen(s);
	line[charcount + 1] = '\0';
}
%}
%x COMMENT 
%%
"/*" {
	BEGIN COMMENT;
	store(yytext);
}
"//".*  {
	store(yytext);
	/* ignore single-line comment */
}
^[ \t]*#pragma[ \t]+source[ \t]+on {
	store(yytext);
	source = 1;
}
^[ \t]*#pragma[ \t]+source[ \t]+off {
	store(yytext);
	source = 0;
}
^[ \t]*#pragma[ \t]+token[ \t]+on {
	store(yytext);
	token = 1;
}
^[ \t]*#pragma[ \t]+token[ \t]+off {
	store(yytext);
	token = 0;
}
if {
	return IF; 
}
else {
	return ELSE; 
}
for|do|while|break|continue|return|struct|switch|case|default    { 
	if(token) printf("#key:%s\n", yytext); 
	store(yytext); 
}
void {
	yylval.typeName = strdup(yytext); 
	return VOID_TYPE;
}
short {
	yylval.typeName = strdup(yytext); 	
	return SHORT_TYPE;
}
int  {
	yylval.typeName = strdup(yytext); 
	return INT_TYPE;
}
long  {
	yylval.typeName = strdup(yytext); 
	return LONG_TYPE;
}
long[ \t]+long {
	yylval.typeName = strdup(yytext); 
	return LONGLONG_TYPE;
}
double {
	yylval.typeName = strdup(yytext); 
	return DOUBLE_TYPE;
}
float {
	yylval.typeName = strdup(yytext); 
	return FLOAT_TYPE;
}
char {
	yylval.typeName = strdup(yytext); 
	return CHAR_TYPE;
}
const {
	yylval.typeName = strdup(yytext); 
	return CONST;
}
signed {
	yylval.typeName = strdup(yytext); 
	return SIGNED;
}
unsigned {
	yylval.typeName = strdup(yytext); 
	return UNSIGNED;
}

NULL|__COUNTER__|__LINE__|INT_MAX|INT_MIN|CHAR_MAX|CHAR_MIN|MAX|MIN {
	if(token) printf("#macro:%s\n", yytext); 
	store(yytext); 
}
[a-zA-Z_][a-zA-Z0-9_]* {
	yylval.idName = strdup(yytext); 
	return ident; 	
}
[0-9]+      { 
	yylval.intVal = atoi(yytext);
	return NUM; 
}
[+-]{0,1}[0-9]+[.][0-9]*|[+-]{0,1}[.][0-9]+ {
	yylval.dVal = atof(yytext); 
	return FLOAT; 
}
[\+\-\*/=%<>&!|^~]  { 
	return yytext[0]; 
}
\-\- {
	return DEC; 
}
\+\+ {
	return INC; 
}
">=" {
	return GE; 
}
"<=" {
	return LE; 
}
"==" {
	return EQ; 
}
"!=" {
	return NEQ; 
}
"&&" {
	return LAND; 
}
"||" {
	return LOR; 
}
"<<" {
	return LSHIFT; 
} 
">>" {
	return RSHIFT; 
}
[:;,.\[\]{}()] {
	return yytext[0]; 
}
\'([^\\']|\\[abefnrtv\\'"?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU][0-9a-fA-F]{4}|\\[uU][0-9a-fA-F]{8})\' {
	yylval.char_const = strdup(yytext); 
	return CHAR_LIT; 
}
\"([^\\"]|\\[abefnrtv\\'"?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU][0-9a-fA-F]{4}|\\[uU][0-9a-fA-F]{8})*\" {
	yylval.string_const = strdup(yytext); 
	return STRING_LIT; 
}
\n         ; 
[ \t]      {store(yytext);}   
.          { printf("UNKNOWN: %s\n", yytext); }
<COMMENT>"*/" { 
	BEGIN 0; 
	store(yytext);
}
<COMMENT>\n {
	store(yytext);
	++linecount;
	if(source) printf("%d:%s", linecount, line);
	charcount = 0;
	line[0] = '\0';
}
<COMMENT>.    {store(yytext);};
%%

int yywrap() {
	return 1;
}
