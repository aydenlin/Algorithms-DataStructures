#include <stdio.h>
#include <malloc.h>
#include "queue.h"

int main() {
	int size = 10;
	int *queue = (int *)malloc(sizeof(int)*size);
	int *head, *tail;
	int result, i;

	head = tail = queue;
	for (i=0; i<11; i++)
		enqueue(i, &head, &tail, queue, size);
	for (i=0; i<12; i++) {
		result = dequeue(&head, &tail, queue, size);
		printf("%d ", result);
	}
	return 0;
}
