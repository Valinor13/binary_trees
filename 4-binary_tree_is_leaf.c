#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks node to see if leaf
 * @node: pointer to node
 * Return: returns 1 for node is leaf and 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node))
		return (0);

	if ((!(node->left)) && (!(node->right)))
		return (1);

	else
		return (0);
}

