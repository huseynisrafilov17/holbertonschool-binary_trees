#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to node.
 * Return: depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int i = 0;
	binary_tree_t *temp = (binary_tree_t *)tree;

	while (temp != NULL && temp->parent != NULL)
	{
		i++;
		temp = temp->parent;
	}
	return (i);
}
