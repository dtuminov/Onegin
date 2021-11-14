build: main.o onegin.o 
 	gcc main.o onegin.o -lm

main.o: main.c
	gcc -c main.c

onegin.o: onegin.c onegin.h
	gcc -c onegin.c

build_docs:
	doxygen Doxyfile

clean:
	rm a.exe main.o onegin.o