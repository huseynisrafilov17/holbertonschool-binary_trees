#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - preorder traversal.
 * @tree: pointer to the root of the tree.
 * @func: function pointer.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *right = NULL, *tree_t = (binary_tree_t *)tree;

	if (tree_t == NULL || func == NULL)
		return;
	(*func)(tree_t->n);
	while (tree_t->left != NULL)
	{
		tree_t = tree_t->left;
		(*func)(tree_t->n);
	}
	while (tree_t->parent != NULL)
	{
		right = tree_t->right;
		if (right)
			(*func)(right->n);
		tree_t = tree_t->parent;
	}
	while (tree_t->right != NULL)
	{
		right = tree_t->right;
		(*func)(right->n);
		if (right->left)
			(*func)(right->left->n);
		tree_t = right;
	}
}
