#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node whose uncle we're looking for
 * 
 * Return: A pointer to the uncle node,
 * NULL if the node is NULL,
 * or if the node has no uncle.
 * 
 * Description: Determines the uncle node of the given node by first checking
 * if the node itself or its parent is NULL. Then, it calls the
 * `binary_tree_sibling` function to find the uncle of the node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent;

    if (!node || !node->parent)
        return NULL;

    parent = node->parent;

    /* Return uncle of the node */
    return binary_tree_sibling(parent);
}
