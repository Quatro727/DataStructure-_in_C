in_to_post: in_to_post.o stack.o
	gcc -o in_to_post in_to_post.o stack.o
in_to_post.o: in_to_post.c stack.h
	gcc -c in_to_post.c
stack.o: stack.c stack.h
	gcc -c stack.c
