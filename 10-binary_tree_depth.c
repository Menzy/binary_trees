#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * 
 * Return: The depth of the node or 0 if the tree is NULL
 * 
 * Description: Calculates the depth of the specified node in the binary tree
 * by traversing up the tree through its parent pointers until reaching the
 * root node (or NULL if the node is not part of a tree).
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth;

    if (!tree)
        return 0;

    depth = 0;
    while (tree->parent)
    {
        depth++;
        tree = tree->parent;
    }
    return depth;
}
