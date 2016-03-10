#include <stdio.h>
#include "counting_sort.h"



int main() {
	int i;
	int box[10] = {9, 8 ,7 ,6 ,5 ,4 , 3, 2 ,1 ,0};
	int dst[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};;
	
	counting_sort(box, dst, 9, 10);
	for (i=0; i<10; i++) 
		printf("%d ", dst[i]);
	return 0;
}
