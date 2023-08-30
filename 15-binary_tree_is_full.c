#include "binary_trees.h"
/**
*binary_tree_is_full - checks if full
*@tree: tree pointer
*Return: 11 if full
*
*
*
*
*
*
*
*
*
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int c = 0, c1 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		c = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		c1 = binary_tree_is_full(tree->right);
	return (c && c1);
}
