# target name : dependencies
# <tab_space> commands to generate target

object.o : *.c 
	gcc *.c -c

all: main.o sum.o square.o product.o diff.o division.o
	gcc main.o sum.o square.o product.o diff.o division.o -o all.out

run: all
	./all.out

clean:
	rm -rf *.o *.out

