# target name : dependencies
# <tab_space> commands to generate target

object.o : *.c 
	gcc $^ -c

# gcc main.c sum.c square.c product.c diff.c division.c -c  -> ( gcc $^ -c )
# gcc main.c  -c  -> ( gcc $< -c )

all: main.o sum.o square.o product.o diff.o division.o
	gcc main.o sum.o square.o product.o diff.o division.o -o $@

run: all
	./all

clean:
	rm -rf *.o *.out all

#Special Variables:
# 1. $^: Consider all the files present in the dependencies, separated space
# 2. $<: Consider only the first file present in the dependencies
# 3. $@: Representing the target / evaluate to all(Executable file being generated named as all)