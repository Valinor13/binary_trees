#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints tree in pre-order format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return;
	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
