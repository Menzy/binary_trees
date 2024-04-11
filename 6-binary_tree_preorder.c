#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	/* Call the function on the value of the current node*/
	func(tree->n);

	/* traverse the left subtree recursively */
	binary_tree_preorder(tree->left, func);

	/* traverse the right subtree recursively */
	binary_tree_preorder(tree->right, func);
}
