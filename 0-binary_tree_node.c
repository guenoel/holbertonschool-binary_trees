#include "binary_trees.h"

/**
 * *binary_tree_node - function to creates a binary tree node
 * @parent: one edge upward to a node
 * @value: node value
 * Return: Tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = malloc(sizeof(*tree));

	if (tree == NULL)
	{
		fprintf(stderr, "Error Malloc\n");
		exit(EXIT_FAILURE);
	}

	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;
	tree->parent = parent;

	return (tree);
}
