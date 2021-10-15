#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node where finding sibling
 * Return: pointer to sibling node or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!(node))
		return (NULL);

	if (node->parent)
	{
		temp = node->parent;
		if (temp->left->n == node->n)
			return (temp->right);
		else if (temp->right->n == node->n)
			return (temp->left);
	}
	return (NULL);
}
