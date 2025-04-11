#include "binary_trees.h"

/**
 * binary_tree_inorder - Recorre un árbol en inorden
 * @tree: Puntero al nodo raíz
 * @func: Función que se ejecuta con cada valor del nodo
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
return;

binary_tree_inorder(tree->left, func);
free(tree->n);
binary_tree_inorder(tree->right, func);
}
