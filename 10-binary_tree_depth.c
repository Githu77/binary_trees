#include "binary_trees.h"

/**
*binary_tree_depth - checks depth of tree
*@tree: pointer
* Return: 0 if null
*
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
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
