#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of tree
 * @tree: binary tree
 * Return: Size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leafs += binary_tree_leaves(tree->left);
	if (tree->right)
		leafs += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		leafs++;

	return (leafs);
}
