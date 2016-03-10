#include "quicksort.h"

void exchange(int *former, int *latter) {
	int middle = *latter;

	*latter = *former;
	*former = middle;
}

int partition(int *array, int index, int tail) {
	int changer;
	int i = index-1, j;

	for (j = index; j < tail; j++) {
		if (array[realpos(j)] < array[realpos(tail)]) {
			i++;
			exchange(array+realpos(i), array+realpos(j));
		}
	}
	exchange(array+realpos(i+1), array+realpos(tail));
	return i+1;
}

void quicksort(int *array, int index, int tail) {
	int p;
	if (index < tail) {
		p = partition(array, index, tail);
		quicksort(array, index, p-1);
		quicksort(array, p+1, tail);
	}
}

