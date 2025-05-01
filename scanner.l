%{
#include <stdio.h>
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
for|do|while|break|continue|if|else|return|struct|switch|case|default    { 
	if(token) printf("#key:%s\n", yytext); 
	store(yytext); 
}
void|int|double|float|char {
	if(token) printf("#key:%s\n", yytext);
	store(yytext);
}
const|signed|unsigned|short|long {
	if(token) printf("#key:%s\n", yytext);
	store(yytext);
}
NULL|__COUNTER__|__LINE__|INT_MAX|INT_MIN|CHAR_MAX|CHAR_MIN|MAX|MIN {
	if(token) printf("#macro:%s\n", yytext); 
	store(yytext); 
}
[a-zA-Z_][a-zA-Z0-9_]* {
	if(token) printf("#id:%s\n", yytext); 
	store(yytext);
}
[-+]{0,1}[0-9]+      { 
	if(token) printf("#integer:%s\n", yytext);
	store(yytext);
}
[+-]{0,1}[0-9]+[.][0-9]*|[+-]{0,1}[.][0-9]+ {
	if(token) printf("#float:%s\n", yytext); 
	store(yytext); 
}
[\+\-\*/=%<>&!|]  { 
	if(token) printf("#op:%s\n", yytext);
	store(yytext);
}
\-\-|\+\+|>=|<=|==|!=|&&|\|\| { 
	if(token) printf("#op:%s\n", yytext);
	store(yytext);
}
[:;,.\[\]{}()] {
	if(token) printf("#punc:%s\n", yytext);
	store(yytext);
}
\'([^\\']|\\[abefnrtv\\'"?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU][0-9a-fA-F]{4}|\\[uU][0-9a-fA-F]{8})\' {
	if(token) printf("#char:%s\n", yytext);
	store(yytext);
}
\"([^\\"]|\\[abefnrtv\\'"?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU][0-9a-fA-F]{4}|\\[uU][0-9a-fA-F]{8})*\" {
    if(token) printf("#string:%s\n", yytext);
    store(yytext);
}
\n          { 
	++linecount; 
	if(source) {
		printf("%d:%s", linecount, line);
		printf("\n");
	}
	charcount = 0; 
	line[0] = '\0';
}
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
int main() {
	yylex();
	return 0;
}
int yywrap() {
	return 1;
}
