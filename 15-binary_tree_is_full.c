#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * 
 * Return: 1 if the tree is full, 0 otherwise or if the tree is NULL.
 * 
 * Description: Determines if the binary tree starting from the given root
 * node is a full binary tree (i.e., every node has either 0 or 2 children)
 * by recursively checking both subtrees and ensuring that each node has either
 * both children or none.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    /* No children means it's a leaf and therefore tree is full */
    if (!tree->left && !tree->right)
    {
        return 1;
    }

    /* Check both subtrees if tree has both children */
    if (tree->left && tree->right)
    {
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    }

    /* Tree is not full if it has only one child */
    return 0;
}
