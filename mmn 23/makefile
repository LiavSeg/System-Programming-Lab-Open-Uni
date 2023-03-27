permut: permut.o isvalid.o permcheck.o file_length.o
	gcc -g permut.o isvalid.o permcheck.o file_length.o -Wall -ansi -pedantic -o permut
permut.o: permut.c permut.h
	gcc -c -Wall -ansi -pedantic permut.c -o permut.o
isvalid.o: isvalid.c permut.h
	gcc -c -Wall -ansi -pedantic isvalid.c -o isvalid.o
permcheck.o: permcheck.c permut.h
	gcc -c -Wall -ansi -pedantic permcheck.c -o permcheck.o
file_length.o: file_length.c
	gcc -c -Wall -ansi -pedantic file_length.c -o file_length.o
