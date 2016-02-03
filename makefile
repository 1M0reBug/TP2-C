verif_syntaxe : main.o functions.o
	gcc -o verif_syntaxe main.o functions.o -g
main.o : main.c
	gcc -c main.c -Wall -Wextra
functions.o : functions.c
	gcc -c functions.c -Wall -Wextra
