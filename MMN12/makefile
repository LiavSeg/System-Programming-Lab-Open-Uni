my_bcmp: my_bcmp.o f1.o f2.o
	gcc -g my_bcmp.o f1.o f2.o -Wall -ansi -pedantic -o my_bcmp
my_bcmp.o: my_bcmp.c bcmp.h
	gcc -c -Wall -ansi -pedantic my_bcmp.c -o my_bcmp.o
f1.o: f1.c f1.h
	gcc -c -Wall -ansi -pedantic f1.c -o f1.o
f2.o: f2.c f2.h
	gcc -c -Wall -ansi -pedantic f2.c -o f2.o
