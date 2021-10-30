build: main.o source.o 
 	gcc main.o source.o -lm

main.o: main.c
	gcc -c main.c

source.o: source.c header.h
	gcc -c source.c

build_docs:
	doxygen Doxyfile

clean:
	rm a.exe main.o source.o