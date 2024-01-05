
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i, j;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	if (i > j)
		return (i + 1);
	else
		return (j + 1);
}
