#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for the binary tree data structure
 * @parent: pointer to the parent node to create
 * @value: value to put in the new node
 * Return: returns a pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!(new_node))
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!(parent))
		new_node->parent = NULL;

	else
		new_node->parent = parent;

	return (new_node);
}
