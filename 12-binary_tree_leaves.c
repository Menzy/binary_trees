#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * 
 * Return: The number of leaves or 0 if the tree is NULL. A NULL pointer
 * is not considered a leaf.
 * 
 * Description: Recursively calculates the number of leaf nodes in the binary
 * tree starting from the given root node by checking if each node has both
 * left and right child pointers as NULL (indicating it's a leaf node) and
 * summing up the counts from both its left and right subtrees.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    if (!tree->left && !tree->right)
    {
        /* If the node is a leaf, return 1 */
        return 1;
    }

    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
