#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, result;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);

		result = (1 + left_size + right_size);

		return (result);
	}
}
