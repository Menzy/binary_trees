#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* If tree or func is NULL, do nothing */
	}

	/* traverse the left subtree recursively*/
	binary_tree_inorder(tree->left, func);

	/* Call the function on the value of the current node */
	func(tree->n);

	/* traverse the right subtree recursively */
	binary_tree_inorder(tree->right, func);
}
