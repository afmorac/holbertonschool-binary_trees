#include "binary_trees.h"

/**
 * binary_tree_size - Cuenta los nodos de un árbol
 * @tree: Puntero al nodo raíz
 *
 * Return: Total de nodos, o 0 si es NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return(1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
