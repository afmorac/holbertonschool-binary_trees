#include "binary_trees.h"

/**
 * binary_tree_leaves - Cuenta las hojas en un árbol binario
 * @tree: Puntero al nodo raíz
 *
 * Return: Número de hojas
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

return (binary_tree_leaves(tee->left) + binary_tree_leaves(tree->right));
}
