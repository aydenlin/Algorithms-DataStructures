ALL=counting_sort.o main
SRC=counting_sort.c main.c

all:$(ALL)

$(ALL):$(SRC)
	gcc -gstabs -c -o counting_sort.o counting_sort.c
	gcc -gstabs -o main main.c counting_sort.o
