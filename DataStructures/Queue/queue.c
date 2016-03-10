#include "queue.h"
#include <stdio.h>

// return value's meaning
// 1 --- full
// 2 --- empty


int enqueue(int e, int **head, int **tail, int *base, int size) {
	if ((*tail+1) == *head || (*tail == base+size-1 && *head == base)) {
		printf("full\n");
		return 1;
	}
	**tail = e;
	(*tail)++;
}

int dequeue(int **head, int **tail, int *base, int size) {
	if (*head == *tail) {
		printf("empty\n");
		return 2;
	}
	if (*head == base+size-1) {
		*head = base;
		return *(base+size-1);
	} else {
		(*head)++;
		return *(*head-1);
	}
}
