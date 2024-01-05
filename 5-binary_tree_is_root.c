#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if a node is root.
 * @node: node of the binary tree.
 * Return: 1 if it is a root, or 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
