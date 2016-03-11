#include "bst.h"
#include <stdio.h>
#include <errno.h>

extern int errno;

BST * tree_minimum(BST *root) {
	if (root == NULL) {
		errno = -1;
		return NULL;
	}
	while (root->left != NULL) 
		root = root->left;
	return root;
}

BST * tree_maximum(BST *root) {
	if (root == NULL) {
		errno = -1;
		return NULL;
	}
	while (root->right != NULL) 
		root = root->right;
	return root;
}

void tree_insert(BST **root, BST *node) {
	int key = node->key;
	BST *iterator = *root;
	BST *position_inserting = NULL;
	while (iterator != NULL) {
		position_inserting = iterator;
		if (key < iterator->key) {
			iterator = iterator->left;
		} else {
			iterator = iterator->right;
		}	
	}

	node->parent = position_inserting;
	if (position_inserting == NULL)
		*root = node;
	else if (key < position_inserting->key)
		position_inserting->left = node;
	else 
		position_inserting->right = node;		
}

static void transplant(BST **root, BST *out, BST *in) {
	if (out->parent == NULL)
		*root = in;
	else if (out == out->parent->left)
		out->parent->left = in;
	else 
		out->parent->right = in;
	if (in != NULL)
		in->parent = out->parent;
}

void tree_del(BST **root, BST *node) {
	if (node->left == NULL)
		transplant(root, node, node->right);
	else if (node->right == NULL)
		transplant(root, node, node->left);
	else {
		BST *successor = tree_minimum(node->right);
		if (successor->parent != node) {
			transplant(root, successor, successor->right);
			successor->right = node->right;
			successor->right->parent = successor;
		}
		transplant(root, node, successor);
		successor->left = node->left;
		successor->left->parent = successor;
	}
}

BST * tree_search(BST *root, int key) {
	while (root != NULL) {
		if (key == root->key)
			return root;
		if (key < root->key)
			root = root->left;
		else if (key > root->key)
			root = root->right;
	}
	return NULL;
}
