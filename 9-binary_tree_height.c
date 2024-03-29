#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - calculates height of tree.
 * @tree: pointer to the node.
 * Return: Height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int i, j;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	if (i > j)
		return (i + 1);
	else
		return (j + 1);
}
