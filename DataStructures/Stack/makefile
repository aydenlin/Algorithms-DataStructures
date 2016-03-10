all:stack.o main
stack.o:stack.c
	gcc -c -o stack.o stack.c
main:main.c
	gcc -o main main.c stack.o
clean:
	rm main stack.o
