#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * 
 * Return: The number of nodes or 0 if the tree is NULL. A NULL pointer
 * is not considered a node.
 * 
 * Description: Recursively calculates the number of nodes in the binary tree
 * starting from the given root node by counting nodes that have at least one
 * child (either left or right child) and summing up the counts from both its
 * left and right subtrees.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_nodes, right_nodes, result;

    if (!tree)
        return 0;

    left_nodes = binary_tree_nodes(tree->left);
    right_nodes = binary_tree_nodes(tree->right);

    /* Include current node in the count if it has at least one child */
    if (tree->left || tree->right)
    {
        result = 1 + left_nodes + right_nodes;
        return result;
    }
    else
    {
        result = left_nodes + right_nodes;
        return result;
    }
}
