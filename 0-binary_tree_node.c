#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a node for binary tree.
 * @parent: parent of the new node.
 * @value: value stored in node.
 * Return: pointer to node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	return (new_node);
}
