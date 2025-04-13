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

/**
 * binary_tree_uncle - Encuentra el tío de un nodo
 * @node: Puntero al nodo
 * Return: Puntero al tío o NULL si no tiene
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

return (binary_tree_sibling(node->parent));
}

