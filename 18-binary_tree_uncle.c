#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node where finding uncle
 * Return: pointer to uncle node or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!(node))
		return (NULL);

	if (node->parent)
	{
		temp = node->parent;
		if (temp->parent)
		{
			if (temp->parent->left->n == temp->n)
				return (temp->parent->right);
			else if (temp->parent->right->n == temp->n)
				return (temp->parent->left);
		}
	}
	return (NULL);
}
