object.io : test.c unity.c main.c def.c 
	gcc $^ -c

all: test.o unity.o main.o def.o 
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all