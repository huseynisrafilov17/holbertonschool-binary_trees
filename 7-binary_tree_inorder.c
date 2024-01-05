#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - inorder traversal.
 * @tree: pointer to the root of the tree.
 * @func: function pointer.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
