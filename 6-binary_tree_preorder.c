#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints tree in pre-order format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, &func);
	}

	else if (tree->right)
	{
		func(tree->right->n);
	}

	else
		func(tree->n);
}
