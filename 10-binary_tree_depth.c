#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Returns the depth as a size_t datatype
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_height;

	if ((!(tree)) || (!(tree->parent)))
		return (0);

	tree_height = binary_tree_depth(tree->parent);
	return (tree_height + 1);
}
