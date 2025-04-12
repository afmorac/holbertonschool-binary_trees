#include "binary_trees.h"

/**
 * binary_tree_is_full - Verifica si un árbol binario es full
 * @tree: Puntero al nodo raíz
 * Return: 1 si es full, 0 si no o si es NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (!tree->left && !tree->right)
return (1);

if (tree->left && tree->right)

return (
binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

return (0);
}

