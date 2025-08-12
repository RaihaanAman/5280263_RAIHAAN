object.io : test.c unity.c def.c 
	gcc $^ -c

all: test.o unity.o def.o 
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all