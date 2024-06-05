#include <stdlib.h>
#include "binary_trees.h"

/**
 *  binary_tree_delete - deletes an entire binary tree
 *  @tree: pointer to the root node of the tree to delete
 *
 * Description: The first step is to check whether the tree is NULL.
 * If not, we check whether the left subtree, both right and left.
 * We free when its NULL.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}

	free(tree);
}
