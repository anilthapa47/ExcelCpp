program1: object.o
	gcc -o program1 object.o

object.o: source.c
	gcc -c source.c -o $@

clean:
	rm *.o program1 
