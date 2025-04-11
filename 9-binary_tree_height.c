#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un árbol binario
 * @tree: Puntero al nodo raíz
 *
 * Return: Altura, o 0 si es NULL o no tiene hijos
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t izq, der;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);
izq = binary_tree_height(tree->left);
der = binary_tree_height(tree->right);

return ((izq > der ? izq : der) +1);
}
