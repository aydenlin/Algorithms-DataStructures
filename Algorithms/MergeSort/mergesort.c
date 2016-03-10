#include "mergesort.h"
#include <malloc.h>

void merge(int *array, int begin, int middle, int end) {
	int i, j, k;
	int *left = (int *)malloc(sizeof(int)*middle-begin+1);
	int *right = (int *)malloc(sizeof(int)*end-middle);

	for (i = 1; i <= middle-begin+1; i++) {
		left[real(i)] = array[real(begin+i-1)];	
	}
	for (j = 1; j <= end-middle; j++) {
		right[real(j)] = array[real(middle+j)];
	}

	i = 1, j = 1;

	for (k = begin; k <= end; k++) {
		if (left[real(i)] <= right[real(j)] &&
				j > end-middle) {
			array[real(k)] = left[real(i)];
			i++;
		} else if (i > middle-begin+1) {
			array[real(k)] = right[real(j)];
			j++;
		}
	}
}

void merge_sort(int *array, int begin, int end) {
	int middle = (begin+end)/2;;
	if (begin < end) {
		merge_sort(array, begin, middle);
		merge_sort(array, middle+1, end);
		merge(array, begin, middle ,end);
	}
}
