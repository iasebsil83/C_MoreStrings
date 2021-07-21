#executable
run: more_strings.o prog.o
	gcc -Wall -o run prog.o more_strings.o -O2
	rm -f *.o



#example program
prog.o: src/prog.c lib/more_strings.h
	gcc -Wall -c src/prog.c -O2



#more_strings library
more_strings.o: lib/more_strings.c lib/more_strings.h
	gcc -Wall -c lib/more_strings.c -O2
