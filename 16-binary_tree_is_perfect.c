#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * 
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is NULL.
 * 
 * Description: Determines if the binary tree starting from the given root
 * node is a perfect binary tree (i.e., all levels are completely filled)
 * by recursively checking both subtrees and ensuring that each node's left
 * and right subtrees have equal heights.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height, result;

    if (!tree)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Check if the tree is balanced and the left and right */
    /* subtrees are perfect */
    if (left_height == right_height)
    {
        result = (binary_tree_is_perfect(tree->left) &&
                  binary_tree_is_perfect(tree->right));
        return result;
    }
    
    /* Tree is not perfect if heights are not equal */
    return 0;
}
