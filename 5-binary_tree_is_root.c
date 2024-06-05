#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: checks whether the given node is a root node
 *
 * Description: A root node has no parent. The function checks whether the
 * node has a parent node
 *
 * Return: 1 if the node is a root and 0 is otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
