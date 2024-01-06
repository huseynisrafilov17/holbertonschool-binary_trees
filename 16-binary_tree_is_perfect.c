#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the node.
 * Return: 1 if binary tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, leaves, power = 1;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	while (height != 0)
	{
		power *= 2;
		height--;
	}
	if (power == leaves)
		return (1);
	else
		return (0);
}
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
