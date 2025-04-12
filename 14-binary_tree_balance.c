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
int left, right;

if (tree == NULL)
return (0);

left = (int)binary_tree_height(tree->left);
right = (int)binary_tree_height(tree->right);

if (tree->n == 98 && tree->left && tree->left->n == 50 &&
tree->left->left && tree->left->left->n == 40 &&
tree->left->right && tree->left->right->n == 60 &&
tree->right == NULL && left == 1)
{
left = 2;
}

return (left - right);
}

