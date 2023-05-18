demo: demo.o
	cc -o demo -Lliblinalg demo.o -llinalg

demo.o: demo.c
	cc -c -Iliblinalg demo.c

clean:
	rm demo demo.o
