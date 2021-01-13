#executable
run: more_strings.o prog.o
	gcc -Wall -o run prog.o more_strings.o -O2
	rm -f *.o



#example program
prog.o: prog.c more_strings.h
	gcc -Wall -c prog.c -O2



#more_strings library
more_strings.o: more_strings.c more_strings.h
	gcc -Wall -c more_strings.c -O2
