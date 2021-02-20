all: program

source.o: Src.cpp
	gcc -c Src.cpp -o source.o

program: source.o
	gcc -o program  source.o 
