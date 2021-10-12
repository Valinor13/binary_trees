#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints tree in post-order format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
