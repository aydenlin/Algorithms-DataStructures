#include <stdio.h>
#include <malloc.h>
#include "stack.h"

#define STACK_SIZE 10

int main() {
	int *stack = (int *)malloc(STACK_SIZE*sizeof(int));
	int *sp = stack-1;
	int result;
	int i = 0;
	while (i < STACK_SIZE + 9) {
		push(i, stack, &sp, STACK_SIZE);
		i++;
	}
	result = pop(stack, sp);
	printf("Result is %d\n", result);
	return 0;
}
