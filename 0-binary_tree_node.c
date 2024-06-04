#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: stores a pointer to the node
 * @value: stores value to be added to the node as n
 *
 * Return: address of the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	(void) *parent;
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
