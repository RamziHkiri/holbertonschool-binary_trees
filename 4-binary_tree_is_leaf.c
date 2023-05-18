#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if o given node is leaf or no
 * @node: node to check
 * Return: 1if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
