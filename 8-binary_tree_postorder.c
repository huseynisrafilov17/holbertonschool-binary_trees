#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - postorder traversal.
 * @tree: pointer to the root of the tree.
 * @func: function pointer.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
