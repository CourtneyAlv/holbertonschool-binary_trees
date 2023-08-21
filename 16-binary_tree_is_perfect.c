#include "binary_trees.h"
/**
 * binary_tree_size(const binary_tree_t *tree)
 * @tree: pointer to the root node of the tree
 * Return: The size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
*size_t binary_tree_height - measures the height of the tree
*@tree: a pointer to the root of the node tree
* Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->left);

	return (left_height > right_height ? left_height : right_height + 1);
}
/**
 *binary_tree_is_perfect- checks if binary tree is perfect
 *@tree: pointer to the root node of the tree
 *Return: return 1 if tree is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t height = binary_tree_height(tree);

	return (1UL << height) -1 == binary_tree_height(tree);
}
