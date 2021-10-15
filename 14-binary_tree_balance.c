#include "binary_trees.h"

/**
 * binary_tree_height2 - Finds the height of the binary tree
 * @tree: A pointer to the root node of the tree
 * Return: returns the height as a size_t datatype
*/

int binary_tree_height2(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!(tree))
		return (0);

	left_height = binary_tree_height2(tree->left);
	right_height = binary_tree_height2(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures balance of tree from current node
 * @tree: pointer to current node
 * Return: returns the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rh, lh;

	if (!(tree))
		return (0);

	if (!(tree->right))
		rh = 0;
	else
		rh = binary_tree_height2(tree->right);
	if (!(tree->left))
		lh = 0;
	else
		lh = binary_tree_height2(tree->left);
	return (lh - rh);
}
