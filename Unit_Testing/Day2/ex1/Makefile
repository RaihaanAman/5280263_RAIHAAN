# target name : dependencies
# <tab_space> commands to generate target

SRCS = main.c sum.c square.c product.c diff.c division.c unity.c
OBJS = main.o sum.o square.o product.o diff.o division.o unity.o

object.o : ${SRCS} 
	gcc $^ -c

all: ${OBJS}
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o *.out all

