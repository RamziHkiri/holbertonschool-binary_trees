#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the tree
 * Return: number of nodes with 1 child at least
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_number = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_number += 1;
	node_number += binary_tree_nodes(tree->left);
	node_number += binary_tree_nodes(tree->right);
	return (node_number);
}
