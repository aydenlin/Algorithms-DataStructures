#ifndef _BST_H_
#define _BST_H_

#include <malloc.h>

#define BST_ELEMENT_INIT(e, k, v) do { \
	e = (BST *)malloc(sizeof(BST)); \
	e->key = k; \
	e->value = v; \
	e->left = NULL; \
	e->right = NULL; \
	e->parent = NULL; \
} while(0)

typedef struct bst {
	int key;
	int value;
	struct bst *left;
	struct bst *right;
	struct bst *parent;
} BST;

BST * tree_minimum(BST *root);
BST * tree_maximum(BST *root);
void tree_insert(BST **root, BST *node);
void tree_del(BST **root, BST *node);
BST * tree_search(BST *root, int key);
#endif /* _BST_H_ */
