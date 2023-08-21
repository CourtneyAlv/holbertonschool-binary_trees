#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocate memory for a new binary_tree_t node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL) /* check if memory allocation failed */
	{
	return (NULL); /* allocation failed */
	}

	new_node->n = value; /* set value of the node */
	new_node->parent = parent; /* set parent pointer */
	new_node->left = NULL; /* initialize left chile pointer */
	new_node->right = NULL; /* initialize right child pointer */

	return (new_node);
}
