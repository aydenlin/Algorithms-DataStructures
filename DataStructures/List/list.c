#include "list.h"
#include <malloc.h>

void list_insert(List **list, List *e) {
	if (*list == NULL) 
		*list = e;
	else {
		(*list)->prev = e;
		e->next = *list;
		*list = e;
	}
}

void list_delete(List **list, List *e) {
	if (e->prev != NULL)
		e->prev->next = e->next;
	else 
		*list = e->next;
	if (e->next != NULL)
		e->next->prev = e->prev;
}

List * list_search(List *list, int e) {
	List *iterator = list;
	while (iterator != NULL) {
		if (iterator->value == e)
			return iterator;
		iterator = iterator->next;
	}
	return NULL;
}
