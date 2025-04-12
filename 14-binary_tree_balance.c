#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un árbol binario
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

/**
 * binary_tree_balance - Mide el factor de balance de un nodo
 * @tree: Puntero al nodo
 * Return: Balance (altura izq - altura der)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

leftH = (binary_tree_height(tree->left)
rightH = (binary_tree_height(tree->right)

return (leftH - rightH);
}
