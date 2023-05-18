#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the given node is the root of binary tree
 * @node: checked node
 * Return: 1 if its root node 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
