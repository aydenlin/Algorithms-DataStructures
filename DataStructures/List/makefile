ALL=list.o main
SRC=list.c main.c


$(ALL):$(SRC)
	gcc -gstabs -c -o list.o list.c
	gcc -gstabs -o main main.c list.o
.PHONY:
clean:
	  -rm list.o main
