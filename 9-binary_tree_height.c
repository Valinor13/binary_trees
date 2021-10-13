#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of the binary tree
 * @tree: A pointer to the root node of the tree
 * Return: returns the height as a size_t datatype
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
