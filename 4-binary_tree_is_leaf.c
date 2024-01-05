#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if node is leaf.
 * @node: node of the binary tree.
 * Return: 1 if it is leaf, or 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
