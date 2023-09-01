#include "binary_trees.h"

/**
 * *binary_tree_insert_left - function to insert node in left-child
 *
 * @parent: one edge upward to a node
 * @value: node value
 * Return: lefttree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_tree;

	if (parent == NULL)
		return (NULL);

	left_tree = malloc(sizeof(*left_tree));

	if (left_tree == NULL)
	{
		fprintf(stderr, "Error Malloc\n");
		exit(EXIT_FAILURE);
	}

	left_tree->n = value;
	left_tree->left = NULL;
	left_tree->right = NULL;
	left_tree->parent = parent;

	if (parent->left != NULL)
	{
		parent->left->parent = left_tree;
		left_tree->left = parent->left;
		parent->left = left_tree;
		left_tree->parent = parent;
	}
	else
	{
		parent->left = left_tree;
		left_tree->parent = parent;
	}
	return (left_tree);
}
