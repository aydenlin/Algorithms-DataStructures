ALL=main hashmap.o list.o
SRC=hashmap.c main.c list.c

$(ALL):$(SRC)
	gcc -gstabs -c -o list.o list.c
	gcc -gstabs -c -o hashmap.o hashmap.c
	gcc -gstabs -o main main.c hashmap.o list.o
.PHONY:
clean:
	  -rm list.o hashmap.o main
