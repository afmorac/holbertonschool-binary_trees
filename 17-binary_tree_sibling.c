#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo
 * @node: Puntero al nodo
 * Return: Puntero al hermano o NULL si no tiene
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}

