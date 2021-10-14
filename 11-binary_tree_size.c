#include "binary_trees.h"

/**
 * binary_tree_size - Count nodes from current down
 * @tree: pointer to current node
 * Return: returns size_t count of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	else
		return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
