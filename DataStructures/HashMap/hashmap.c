#include "hashmap.h"
#include "list.h"
#include <errno.h>

extern int errno;

static int hash(int key, int prime) {
	return key%prime;
}

void add(List **hashmap, int key, int value) {
	List *elements;
	int slot = hash(key, PRIME);
	INIT_LIST_ELEMENTS(elements, key, value);
	if (list_search(*(hashmap+slot), key) != NULL) {
		errno = 1;
		return;
	}
	list_insert(hashmap+slot, elements);
}

int obtain(List **hashmap, int key) {
	int slot = hash(key, PRIME);
	List *result = list_search(*(hashmap+slot), key);
	if (result == NULL) {
		errno = 2;
		return -1;
	}
	list_delete(hashmap+slot, result);
	return result->value;
}
