#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 * 
 * Description: Recursively deletes all nodes in the binary tree starting from
 * the given root node and frees the memory allocated for each node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return; /* If tree is NULL, do nothing */

    /* Recursively delete the left and right subtrees */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Free the memory of the current node */
    free(tree);
}
