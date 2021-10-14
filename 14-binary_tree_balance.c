#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance of tree from current node
 * @tree: pointer to current node
 * Return: returns the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!(tree))
		return 0;

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
