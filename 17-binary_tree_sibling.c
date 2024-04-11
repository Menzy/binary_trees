#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling of
 * Return: a pointer to the sibling node,
 * NULL if the node or the parent is NULL,
 * or if the node has no sibling,
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	/* If node is NULL or the parent is NULL, return NULL*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	/* Return the sibling of the node based on the parent's other child*/
	return ((parent->left == node) ? parent->right : parent->left);
}
