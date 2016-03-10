all:queue.o main
queue.o:queue.c
	gcc -gstabs -c -o queue.o queue.c
main:main.c 
	gcc -gstabs -o main main.c queue.o
