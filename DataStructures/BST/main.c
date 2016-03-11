#include <stdio.h>
#include "bst.h"

int main() {
	BST *root = NULL;
	BST *element = NULL;
	BST *got = NULL;

	BST_ELEMENT_INIT(element, 7, 6);
	tree_insert(&root, element);
	tree_del(&root, element);
	got = tree_search(root, 7);
	if (got == NULL)
		printf("NULL\n");
	return 0;
}

