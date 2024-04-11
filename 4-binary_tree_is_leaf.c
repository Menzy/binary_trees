#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a given node is a leaf node
 * @node: A pointer to the node to check
 * 
 * Return: 1 if the node is a leaf, otherwise 0. If the node is NULL, return 0.
 * 
 * Description: Determines if the specified node is a leaf node by checking if
 * both its left and right child pointers are NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return 0; /* If node is NULL, return 0 */

    return (node->left == NULL && node->right == NULL);
}
