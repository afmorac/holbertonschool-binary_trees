#include "binary_trees.h"

/**
 * binary_tree_preorder - Recorre un árbol en preorden
 * @tree: Puntero al nodo raíz
 * @func: Función que se llama con cada valor
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
