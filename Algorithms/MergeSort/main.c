#include <stdio.h>
#include "mergesort.h"

int main() {
	int i;
	int array[10]= {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	MERGE_SORT(array, 0, 9);
	
	for (i = 0; i<10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
