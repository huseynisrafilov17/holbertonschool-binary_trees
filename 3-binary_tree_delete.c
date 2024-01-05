#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes binary tree.
 * @tree: root node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *parent = NULL;

	if (tree == NULL)
		return;
	while (tree->left != NULL)
		tree = tree->left;
	while (tree->parent != NULL)
	{
		parent = tree->parent;
		if (tree->right)
			free(tree->right);
		free(tree);
		tree = parent;
	}
	while (tree->right != NULL)
		tree = tree->right;
	while (tree->parent != NULL)
	{
		parent = tree->parent;
		if (tree->left)
			free(tree->left);
		free(tree);
		tree = parent;
	}
	free(tree);
}
