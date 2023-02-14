wish.o: wish.c
	gcc -c wish.c
command.o:
	gcc -c command.c
wish: wish.o command.o
	gcc -o wish wish.o command.o
