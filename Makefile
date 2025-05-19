parser: y.tab.c lex.yy.c
	gcc -o parser y.tab.c lex.yy.c -lfl

y.tab.c y.tab.h: parser.y
	yacc -d parser.y
scanner: lex.yy.c y.tab.c y.tab.h
	gcc -o $@ $^
lex.yy.c: scanner.l
	flex scanner.l

clean:
	rm -f parser y.tab.c y.tab.h lex.yy.c
