#include "binary_trees.h"
/**
 * binary_tree_height - calculate the height of binary tree
 * @tree: pointer to the binary tree
 * Return: the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_edge_height = 0, right_edge_height = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		left_edge_height += 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_edge_height += 1 + binary_tree_height(tree->right);

	if (left_edge_height > right_edge_height)
		return (left_edge_height);
	else
		return (right_edge_height);
}
