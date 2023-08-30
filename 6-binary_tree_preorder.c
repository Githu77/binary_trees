#include "binary_trees.h"

/**
* binary_tree_preorder - checks binary tree
* @tree: points to node root
* @func: points to function
*
*
*
*
*
*
*
*
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
