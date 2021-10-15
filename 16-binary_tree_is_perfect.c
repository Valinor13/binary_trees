#include "binary_trees.h"

/**
 * binary_tree_depth2 - finds depth at current node
 * @tree: pointer to current node
 * Return: depth at current node (node to root)
 */
int binary_tree_depth2(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = (tree->left);
	}

	return (depth);
}

/**
 * isPerf - recursive function that actually checks if tree is perfect
 * @tree: pointer to current node
 * @depth: depth of tree at current node
 * @level: level of tree at current node
 * Return: 1 if perfect, 0 otherwise
 */
int isPerf(const binary_tree_t *tree, int depth, int level)
{
	int left, right;

	if (!(tree))
		return (1);

	if ((!(tree->left)) && (!(tree->right)))
		return (depth == (level + 1));

	if ((!(tree->left)) || (!(tree->right)))
		return (0);

	left = isPerf(tree->left, depth, level + 1);
	right = isPerf(tree->right, depth, level + 1);

	return (left && right);
}

/**
 * binary_tree_is_perfect - check if tree is perfect (full and balanced)
 * @tree: pointer to current node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!(tree))
		return (0);

	d = binary_tree_depth2(tree);

	return (isPerf(tree, d, 0));
}
