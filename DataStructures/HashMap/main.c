#include <stdio.h>
#include <malloc.h>
#include <errno.h>
#include "hashmap.h"
#include "list.h"

extern int errno;

int main() {
	int result = 0;
	List **hashmap = (List **)malloc(sizeof(void *)*PRIME);
	
	add(hashmap, 1, 2);
	result = obtain(hashmap, 1);
	result = obtain(hashmap, 1);
	if (result == -1 && errno == 2)
		printf("no found\n");
	else
		printf("%d\n", result);
	return 0;
}
