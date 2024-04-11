#include "binary_trees.h"

/**
 * _maxi - Finds the maximum of two values.
 * @left: The first value
 * @right: The second value
 * 
 * Return: The maximum value of the two provided values
 */
size_t _maxi(size_t left, size_t right)
{
    return ((left > right) ? left : right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * 
 * Return: The height of the tree or 0 if the tree is NULL
 * 
 * Description: Recursively calculates the height of the binary tree starting
 * from the given root node by comparing the heights of its left and right
 * subtrees and adding 1 to the maximum of the two heights.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height, result;

    if (!tree)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    result = _maxi(left_height, right_height) + 1;

    return result;
}
