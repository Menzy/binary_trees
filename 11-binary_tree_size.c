#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * 
 * Return: The size of the tree or 0 if the tree is NULL
 * 
 * Description: Recursively calculates the size of the binary tree starting
 * from the given root node by summing up the sizes of its left and right
 * subtrees and adding 1 for the root node itself.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size, result;

    if (!tree)
        return 0;

    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);

    result = (1 + left_size + right_size);

    return result;
}
