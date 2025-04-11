#include "binary_trees.h"

/**
 * binary_tree_postorder - Recorre un árbol en postorden
 * @tree: Puntero al nodo raíz
 * @func: Función que se ejecuta con cada valor del nodo
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
