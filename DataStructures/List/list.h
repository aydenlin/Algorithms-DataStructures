#ifndef _LIST_H_
#define _LIST_H_

#include <malloc.h>

#ifndef NULL
#define NULL 0
#endif /* NULL */

#define INIT_LIST_ELEMENTS(list, val) do { \
	list = (List *)malloc(sizeof(List)); \
	list->value = val; \
	list->prev = NULL; \
	list->next = NULL; \
} while(0)

typedef struct list {
	int value;
	struct list *prev;
	struct list *next;
} List;

void list_set_value(List *e, int v);
void list_insert(List **list, List *e);
void list_delete(List **list, List *e);
List * list_search(List *list, int e);

#endif /* _LIST_H_ */
