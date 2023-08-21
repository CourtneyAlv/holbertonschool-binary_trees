#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using preorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	/* call the function on the current nodes value */
	func(tree->n);

	/*recursively traverse the left tree */
	binary_tree_preorder(tree->left, func);

	/*recursively travers the right tree */
	binary_tree_preorder(tree->right, func);
}
