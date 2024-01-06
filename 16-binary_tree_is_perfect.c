#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the node.
 * Return: 1 if binary tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, is_full;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	is_full = binary_tree_is_full(tree);
	return ((left_height == right_height) & is_full);
}
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
