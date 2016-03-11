#include "queue.h"
#include <stdio.h>
#include <errno.h>

// return value's meaning
// 1 --- full
// 2 --- empty

extern int errno;

int enqueue(int e, int **head, int **tail, int *base, int size) {
	if ((*tail+1) == *head || (*tail == base+size-1 && *head == base)) {
		errno = 1;
		return -1;
	}
	**tail = e;
	(*tail)++;
}

int dequeue(int **head, int **tail, int *base, int size) {
	if (*head == *tail) {
		errno = 2;
		return -1;
	}
	if (*head == base+size-1) {
		*head = base;
		return *(base+size-1);
	} else {
		(*head)++;
		return *(*head-1);
	}
}
