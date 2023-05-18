OBJS = matrices.o

liblinalg.a: $(OBJS)
	ar crv liblinalg.a $(OBJS)

matrices.o: matrices.c linalg.h
	cc -c matrices.c

clean:
	rm liblinalg.a $(OBJS)
