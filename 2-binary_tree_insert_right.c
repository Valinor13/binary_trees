#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: pointer to parent node that contains right child
 * @value: value to store in new right child
 * Return: pointer to new node
 */

/* If parent already has right child, replace with new node */
/* Old right child is right child of new node */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->n = parent->right->n;
		parent->right->n = value;
		parent->right->right = new_node;
		new_node->parent = parent->right;
	}
	else
	{
		parent->right = new_node;
		new_node->n = value;
		new_node->parent = parent;
	}

	return (new_node);
}
