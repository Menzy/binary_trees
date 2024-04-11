#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full or 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* No children means it's a leaf and therefore tree is full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* check both subtrees if tree has both children */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	/* Tree is not full if it has only one child*/
	return (0);
}
