#include "binary_trees.h"

/**
 * postorder_recursion_func - Prints tree in post-order format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
 */

void postorder_recursion_func(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left->left)
		postorder_recursion_func(tree->left, &func);
	
	else
	{
		func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
	}
}

/**
 * binary_tree_postorder - Prints tree in post-order format
 * @tree: pointer to root node
 * @func: pointer to function that prints node
 * Return: returns void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *root;

	root = tree;
	postorder_recursion_func(tree, &func);
	func(root->n);
}
