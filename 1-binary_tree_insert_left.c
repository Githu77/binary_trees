#include "binary_trees.h"

/**
*binary_tree_insert_left - inserts to the left
*@parent: pointer to node
*@value: value
*Return: new node
*
*
*
*
*
*
*
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw->left = parent->left;
		parent->left->parent = nw;
	}
	parent->left = nw;

	return (nw);
}
