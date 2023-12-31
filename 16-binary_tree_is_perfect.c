#include "binary_trees.h"
/**
* binary_tree_height - measures the height of the tree
*@tree: a pointer to the root of the node tree
* Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
/**
 *binary_tree_is_perfect- checks if binary tree is perfect
 *@tree: pointer to the root node of the tree
 *Return: return 1 if tree is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
	return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left != height_right)
	return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
	return (1);

	return (0);
}
