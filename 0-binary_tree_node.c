#include "binary_trees.h"

/**
* binary_tree_node - creates binary tree node
* @parent: parent node
* @value: value for node
* Return: new node pointer
*
*
*
*
*
*
*
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	nw->n = value;
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}
