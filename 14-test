#include "binary_trees.h"
/**
 *
 *
 *
*/













/**
 *binary_tree_balance- measures the balance factor of a binary tree
 * @tree:pointer to the root node of the trr to measure the balance factor
 * Return: balance of the tree, if tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
	return (0);

	left_balance = binary_tree_balance(tree->left);
	right_balance = binary_tree_balance(tree->right);

	return (left_balance > right_balance ? left_balance + 1 : right_balance + 1);
}
