#include "binary_trees.h"

/**
 * binary_tree_sibling - function
 * @node: node
 * Return: sibling node pointer
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	return (NULL);
}
