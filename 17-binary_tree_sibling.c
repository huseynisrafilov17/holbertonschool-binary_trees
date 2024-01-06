#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - checks if a binary tree is perfect.
 * @node: pointer to the node.
 * Return: pointer to the sibling or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}
