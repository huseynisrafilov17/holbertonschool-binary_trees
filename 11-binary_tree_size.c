#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to node.
 * Return: size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int i = 0, j = 0;

	if (tree == NULL)
		return (i + j);
	i = binary_tree_size(tree->left);
	j = binary_tree_size(tree->right);
	return (i + j + 1);
}
