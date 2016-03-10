#include <stdio.h>
#include <malloc.h>

void pointer_plus(int *p);

int main() {
	int p[3] = {1,2,3};
	printf("%d\n", ++(*p));
}
