#include <stdio.h>
#include "insertion_sort.h"

int main() {
	int i = 0;
	int line[10] = {9,8,7,6,5,4,3,2,1,0};
	insertion_sort(line, 10);
	while (i < 10) {
		printf("%d ", line[i]);
		i++;
		if (i == 10) 
			printf("\n");
	}
	return 0;
}
