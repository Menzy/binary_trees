#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * 
 * Return: The balance factor or 0 if the tree is NULL.
 * 
 * Description: Calculates the balance factor of the binary tree starting from
 * the given root node by subtracting the height of its right subtree from
 * the height of its left subtree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height, result;

    if (!tree)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    result = left_height - right_height;
    return result;
}
