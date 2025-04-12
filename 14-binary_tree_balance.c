#include "binary_trees.h"

/**
 * binary_tree_height - Calcula la altura de un subárbol
 * @tree: Puntero al nodo raíz
 * Return: Altura
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
return (0);

if (tree->left)
left = 1 + binary_tree_height(tree->left);

if (tree->right)
right = 1 + binary_tree_height(tree->right);

return (left > right ? left : right);
}

/** mide factor de balance */

int binary_tree_balance(cont binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (
(int)binary_tree_height(tree->left) -
(int)binary_tree_height(tree->right)
);
}
