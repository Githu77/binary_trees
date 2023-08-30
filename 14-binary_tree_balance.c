#include "binary_trees.h"

/**
* binary_tree_balance - checks balance factor
* @tree: points to root
* Return: 0 if null
*
*
*
*
*
*
*
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
* binary_tree_height - checks height of tree
* @tree: points to root
* Return: 0
*
*
*
*
*
*
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0, y = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((x > y) ? x : y);
	}
	return (0);
}
