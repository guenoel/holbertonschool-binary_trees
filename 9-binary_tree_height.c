#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: binary tree
 * Return: Max
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t w = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		l = binary_tree_height(tree->left);
		l++;
	}

	if (tree->right)
	{
		w = binary_tree_height(tree->right);
		w++;
	}

	if (l >= w)
		return (l);
	else
		return (w);
}
