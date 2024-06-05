#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of the parent node
 *
 * @parent: pointer to a node to insert right-child
 * @value: integer to be inserted into the node
 *
 * Description: The function creates a node. It then checks whether the
 * parent's right child is NULL or contains an address. If it is NULL,
 * it sets the new node as the right child of the parent. If the parent
 * has a right child, it sets the new node as a right child and sets the old
 * child as the right child of the new node.
 *
 * Return: address of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new->left = NULL;

	if (parent->right == NULL)
	{
		new->right = NULL;
		parent->right = new;
		new->parent = parent;
		return (new);
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;
		return (new);
	}
}
