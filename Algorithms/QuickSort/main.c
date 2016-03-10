#include <stdio.h>
#include "quicksort.h"

int main() {
	int i;
	int box[10] = {2,3,4,1,8,9,0,7,5,6};
	QUICK_SORT(box, 0, 9);
	
	for (i = 0; i < 10; i++) 
		printf("%d ", box[i]);
	printf("\n");
	return 0;
}
