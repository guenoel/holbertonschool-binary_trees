#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count nodes
 * @tree: root of tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_nodes(tree->left);
	if (tree->right)
		size += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		size++;
	return (size);
}
