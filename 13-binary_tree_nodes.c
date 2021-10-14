#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes from current down that are not leaves
 * @tree: pointer to current node
 * Return: returns size_t count of nodes that are not leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
		return (0);
	else
		return (binary_tree_nodes(tree->right) + 1 + binary_tree_nodes(tree->left));
}
