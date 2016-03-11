ALL=main bst.o
SRC=main.c bst.c

all:$(ALL)

$(ALL):$(SRC)
	gcc -gstabs -c -o bst.o bst.c
	gcc -gstabs -o main main.c bst.o
.PHONY:
	clean:
		  rm main bst.o
