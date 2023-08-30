#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts to right
* @parent: node to insert
* @value: node value
* Return: new node
*
*
*
*
*
*
*
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nw->right = parent->right;
		parent->right->parent = nw;
	}
	parent->right = nw;
	return (nw);
}
