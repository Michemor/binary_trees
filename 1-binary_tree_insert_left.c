#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of the parent node
 *
 * @parent: pointer to a node to insert left_child
 * @value: integer to be inserted into the node
 *
 * Description: The function creates a node. It then checks whether the
 * parent's left child is NULL or contains an address. If it is NULL,
 * it sets the new node as the left child of the parent. If the parent
 * has a left-child, it sets the new node as a left child and sets the old
 * child as the left child of the new node.
 *
 * Return: address to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->right = NULL;

	if (parent->left == NULL)
	{
		new->left = NULL;
		parent->left = new;
		new->parent = parent;
		return (new);
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = temp;
		temp->parent = new;
		return (new);
	}
}
