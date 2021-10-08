#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks node to see if root node
 * @node: pointer to node
 * Return: returns 1 for node is root and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!(node))
		return (0);

	if (!(node->parent))
		return (1);

	else
		return (0);
}
