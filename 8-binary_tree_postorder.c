#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 * Description: Traverses the binary tree in post-order fashion, starting from
 * the given root node, and applies the specified function to each node's value.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		/* If tree or func is NULL, do nothing */
		return;
	}

	/* traverse the left subtree recursively */
	binary_tree_postorder(tree->left, func);

	/* traverse the right subtree recursively */
	binary_tree_postorder(tree->right, func);

	/* Call the function on the value of the current node */
	func(tree->n);
}
