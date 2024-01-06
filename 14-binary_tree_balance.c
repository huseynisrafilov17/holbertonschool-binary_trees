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

	if (tree == NULL)
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	if (i > j)
		return (i + 1);
	else
		return (j + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the node.
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return (a - b);
}
