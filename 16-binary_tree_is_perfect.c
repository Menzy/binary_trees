#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect or 0 otherwise or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height, result;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if the tree is balanced and the left and right */
	/* subtrees are perfect */
	if (left_height == right_height)
	{
		result = (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
		return (result);
	}
	/* tree is not perfect if heights are not equal */
	return (0);
}
