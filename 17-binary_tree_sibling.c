#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling of
 * 
 * Return: A pointer to the sibling node,
 * NULL if the node or the parent is NULL,
 * or if the node has no sibling.
 * 
 * Description: Determines the sibling node of the given node by checking
 * its parent's children and returning the other child. Returns NULL if the
 * node itself or its parent is NULL or if the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent;

    /* If node is NULL or the parent is NULL, return NULL */
    if (!node || !node->parent)
        return NULL;

    parent = node->parent;

    /* Return the sibling of the node based on the parent's other child */
    return (parent->left == node) ? parent->right : parent->left;
}
