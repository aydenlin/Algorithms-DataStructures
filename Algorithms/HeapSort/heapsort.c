#include <malloc.h>
#include <string.h>
#include "heapsort.h"

void heap_sort(int *array, int size) {
	int i;
	int changer;
	build_heap(array, size);
	
	for (i = size; i > 1; i--) {
		changer = array[realpos(i)];
		array[realpos(i)] = array[realpos(1)];
		array[realpos(1)] = changer;

		max_heapify(array, 1, --size);
	}
}

void build_heap(int *array, int size) {
	int i;
	for (i = size/2; i>=1; i--) {
		max_heapify(array, i, size);
	}
}

int parent(int i) {
	return i/2;
}

int left(int i) {
	return 2*i;
}

int right(int i) {
	return 2*i + 1;
}


void max_heapify(int *box, int indice, int size) {
	int largest = 0;
	int left_indice = left(indice), right_indice = right(indice);
	 
	if (left_indice <= size && 
			box[realpos(left_indice)] > box[realpos(indice)]) {
		largest = left_indice;
	} else largest = indice;
	
	if (right_indice <= size && 
			box[realpos(right_indice)] > box[realpos(largest)]) {
		largest = right_indice;
	}

	if (largest != indice) {
		int changer = box[realpos(indice)];
		box[realpos(indice)] = box[realpos(largest)];
		box[realpos(largest)] = changer;
		max_heapify(box, largest, size);
	}
}
