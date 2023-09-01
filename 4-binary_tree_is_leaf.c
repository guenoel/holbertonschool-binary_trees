#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if node is a leaf
 *
 * @node: node to check
 * Return: 1 if it's a leaf or 0 if failed
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
