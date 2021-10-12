#include "binary_trees.h"

/**
 * binary_tree_inorder - Prints tree in ordered format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
