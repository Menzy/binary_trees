#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes or 0 if tree is NULL. A NULL pointer
 * is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, result;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	/* include current node in the count if it has at least one child */
	if (tree->left != NULL || tree->right != NULL)
	{
		result = 1 + left_nodes + right_nodes;
		return (result);
	}
	else
	{
		result = left_nodes + right_nodes;
		return (result);
	}
}
