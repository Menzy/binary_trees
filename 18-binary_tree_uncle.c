#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node whose uncle we're looking for
 * Return: a pointer to the uncle node,
 * NULL if the node is NULL,
 * or if the node has no uncle,
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	/* Return uncle of the node*/
	return (binary_tree_sibling(parent));
}
