#include "binary_trees.h"
/**
 * binary_tree_delete - delete a binary tree
 * @tree: is a pointer to the root node of thr tree to delete
 * Return: tree is NULL, do nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{	/* recursively deletes left and right subtrees */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

	/* delete the current node */
	free(tree);
	}
}
