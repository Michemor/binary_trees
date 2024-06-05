#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through each node of a tree 
 * using postorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the function to print node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	func = &print_num;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
