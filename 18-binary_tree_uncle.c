#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: a pointer to find the node uncle
 * Return: pointer to the uncle node, NULL if no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		if (grandparent->right)
		return (grandparent->right);
	}
	else
	{
		if (grandparent->left)
		return (grandparent->left);
	}
	return (NULL);
}
