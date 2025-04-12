#include "binary_trees.h"

/**
 * binary_tree_balance - Mide el factor de balance de un nodo
 * @tree: Puntero al nodo
 * Return: Valor de balance (altura izq - altura der)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (
(int)binary_tree_height(tree->left) -
(int)binary_tree_height(tree->right));
}
