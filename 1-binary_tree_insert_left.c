#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - creates a node & inserts it to its parent's left.
 * @parent: parent of the new node.
 * @value: value stored in node.
 * Return: pointer to new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_left, *new_left;

	if (parent != NULL)
	{
		old_left = parent->left;
		new_left = binary_tree_node(parent, value);
		if (new_left != NULL)
		{
			parent->left = new_left;
			if (old_left != NULL)
				new_left->left = old_left;
			return (new_left);
		}
	}
	return (NULL);
}
