#include "stack.h"
#include <stdio.h>

void push(int e, int *base, int **sp, int size) {
	if (*sp == base+size-1) {
		printf("stack is full\n");
		return;
	}
	(*(sp))++;
	**sp = e;
}

int pop(int *base, int *sp) {
	if (sp == base-1) {
		printf("Stack is empty\n");
		return 1;
	}

	sp--;
	return *(sp+1);
}
