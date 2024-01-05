#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - creates a node & puts it to its parent's right.
 * @parent: parent of the new node.
 * @value: value stored in node.
 * Return: pointer to new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_right = NULL, *new_right = NULL;

	if (parent != NULL)
	{
		old_right = parent->right;
		new_right = binary_tree_node(parent, value);
		if (new_right != NULL)
		{
			parent->right = new_right;
			if (old_right != NULL)
			{
				old_right->parent = new_right;
				new_right->right = old_right;
			}
			return (new_right);
		}
	}
	return (NULL);
}
