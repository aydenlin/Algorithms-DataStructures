#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"

int main() {
	int i;
	int array[10] = {9, 8, 7, 6, 5, 4, 3 ,2 ,1, 0};

	heap_sort(array, 10);

	for (i=0; i<10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
