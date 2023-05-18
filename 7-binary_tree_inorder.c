#include "binary_trees.h"
/**
 *  binary_tree_inorder -  goes through a binary tree using in-order traversal
 *  @tree: tree to be treversed
 *  @func:pinter to the function used on the node data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
