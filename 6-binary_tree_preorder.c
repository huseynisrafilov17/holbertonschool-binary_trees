#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - preorder traversal.
 * @tree: pointer to the root of the tree.
 * @func: function pointer.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(*func)(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
