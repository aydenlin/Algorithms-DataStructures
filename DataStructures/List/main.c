#include <stdio.h>
#include "list.h"

int main() {
	List *list = NULL, *elements = NULL, *search = NULL;

	INIT_LIST_ELEMENTS(elements,5);
	list_insert(&list, elements);
	list_delete(&list, elements);
	search = list_search(list, 5);
	if (search != NULL)
		printf("%d ", search->value);
	else 
		printf("NULL\n");
	return 0;
}
