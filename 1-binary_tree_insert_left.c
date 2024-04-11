#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of a given parent node
 * @parent: A pointer to the parent node to insert the left child into
 * @value: The value to store in the new node
 * 
 * Return: A pointer to the newly created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (!new_node)
        return NULL;

    if (!parent)
    {
        free(new_node);
        return NULL;
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    if (parent->left)
    {
        parent->left->parent = new_node;
        /* Update the parent reference of the existing left child to point to the new node */
    }

    parent->left = new_node;
    /* Set the new node as the left child of the parent */

    return new_node;
}
