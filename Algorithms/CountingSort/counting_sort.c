#include "counting_sort.h"
#include <malloc.h>

void counting_sort(int *src, int *dst, int biggest, int size) {
	int i;
	int count_table_number = biggest+1;
	int *count_table = (int *)malloc(sizeof(int)*count_table_number);
	
	for (i=0; i<count_table_number; i++)
		count_table[i] = 0;
	for (i=0; i<size; i++)
		count_table[src[i]] = count_table[src[i]] + 1;
	for (i=1; i<count_table_number; i++)
		count_table[i] = count_table[i-1] + count_table[i];

	for (i=0; i<size; i++) {
		dst[count_table[src[i]-1]] = src[i];
		count_table[src[i]-1] = count_table[src[i]-1] - 1;
	} 
}
