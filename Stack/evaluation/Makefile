evaluation_postfix: evaluation_postfix.o stack.o
	gcc -o evaluation_postfix evaluation_postfix.o stack.o
evaluation.o: evaluation_postfix.c stack.h
	gcc -c evaluation_postfix.c
stack.o: stack.c stack.h
	gcc -c stack.c
