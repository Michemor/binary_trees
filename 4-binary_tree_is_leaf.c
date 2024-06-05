#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 * @node: node to be checked
 *
 * Description: The function checks whether the left and right
 * pointers are NULL. If they are the value 1 is returned indicating
 * it is a leaf node and if the left and right pointers have addresses
 * then the node is not a leaf node.
 *
 * Return: 1 if node is a lead and 0 if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
