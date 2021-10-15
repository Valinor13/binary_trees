#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full (every node has 2 children)
 * @tree: pointer to current node
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!(tree))
		return (1);

	if ((!(tree->left)) && (!(tree->right)))
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}