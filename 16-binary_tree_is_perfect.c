#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - Mide la altura de un árbol binario
 * @tree: Puntero al nodo raíz
 * Return: Altura del árbol
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
 * binary_tree_size - Cuenta el número de nodos de un árbol binario
 * @tree: Puntero al nodo raíz
 * Return: Cantidad de nodos
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Verifica si un árbol binario es perfecto
 * @tree: Puntero al nodo raíz
 * Return: 1 si es perfecto, 0 si no
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, nodes;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);

if (nodes == (size_t)pow(2, height + 1) - 1)
return (1);
else
return (0);
}

