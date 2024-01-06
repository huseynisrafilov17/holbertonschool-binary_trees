#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the node.
 * Return: 1 if binary tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i, j;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	i = binary_tree_is_full(tree->left);
	j = binary_tree_is_full(tree->right);
	return (i & j);
}
