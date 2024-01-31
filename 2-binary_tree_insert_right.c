#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that creates a binary tree node
 * @parent: root node
 * @value: integer
 * Return: the new left node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);
	/*create new node*/
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	/*checking if right child is filled*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
