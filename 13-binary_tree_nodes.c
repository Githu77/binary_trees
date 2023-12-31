#include "binary_trees.h"

/**
* binary_tree_nodes - checks nodes with one child
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
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nds = 0;

	if (tree)
	{
		nds += (tree->left || tree->right) ? 1 : 0;
		nds += binary_tree_nodes(tree->left);
		nds += binary_tree_nodes(tree->right);
	}
	return (nds);
}
