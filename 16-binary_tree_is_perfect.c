#include "binary_trees.h"

/**
 * binary_tree_height - Calcula la altura del árbol
 * @tree: Nodo raíz
 * Return: Altura
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

return (1 + (left > right ? left : right));
}

/**
 * binary_tree_size - Cuenta los nodos del árbol
 * @tree: Nodo raíz
 * Return: Cantidad total de nodos
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Verifica si un árbol es perfecto
 * @tree: Puntero al nodo raíz
 * Return: 1 si es perfecto, 0 en caso contrario
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, size, expected_nodes = 1;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);
size = binary_tree_size(tree);

/* expected_nodes = 2^height - 1 */
while (height > 0)
{
expected_nodes *= 2;
height--;
}
expected_nodes -= 1;
return (size == expected_nodes);
}
