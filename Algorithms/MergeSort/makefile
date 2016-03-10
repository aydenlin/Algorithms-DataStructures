ALL=mergesort main
SRC=mergesort.c main.c
all:$(ALL)

$(ALL):$(SRC)
	gcc -gstabs -c -o mergesort.o mergesort.c
	gcc -gstabs -o main main.c mergesort.o
