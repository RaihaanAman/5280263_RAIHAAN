object.io : leapyear.c unity.c leap_test.c
	gcc $^ -c

all: leapyear.o unity.o leap_test.o
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all