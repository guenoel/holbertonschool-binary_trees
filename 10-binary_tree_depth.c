#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of binary tree
 * @tree: binary tree
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		l = binary_tree_depth(tree->parent);
		l++;
	}

	return (l);

}
