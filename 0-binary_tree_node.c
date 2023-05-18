#include "binary_trees.h"
/**
 * binary_tree_node - create new binary tree node
 * @parent: the parent's node of the created node
 * @value: the value of the created node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (!value)
		return (NULL);
	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
