#include "binary_trees.h"

/**
 * *binary_tree_insert_right - function to insert node in right-child
 *
 * @parent: one edge upward to a node
 * @value: node value
 * Return: lefttree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_tree;

	if (parent == NULL)
		return (NULL);

	right_tree = malloc(sizeof(*right_tree));

	if (right_tree == NULL)
	{
		fprintf(stderr, "Error Malloc\n");
		exit(EXIT_FAILURE);
	}

	right_tree->n = value;
	right_tree->left = NULL;
	right_tree->right = NULL;
	right_tree->parent = parent;

	if (parent->right != NULL)
	{
		parent->right->parent = right_tree;
		right_tree->right = parent->right;
		parent->right = right_tree;
		right_tree->parent = parent;
	}
	else
	{
		parent->right = right_tree;
		right_tree->parent = parent;
	}
	return (right_tree);
}
