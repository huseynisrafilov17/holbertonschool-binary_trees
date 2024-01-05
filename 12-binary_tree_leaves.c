#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to node.
 * Return: leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int i = 0, j = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (i + j + 1);
	i = binary_tree_leaves(tree->left);
	j = binary_tree_leaves(tree->right);
	return (i + j);
}
