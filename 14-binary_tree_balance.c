#include "binary_trees.h"
/**
 * height - function that measures
 * the balance factor of a binary tree
 * @node: pointer to the root node of the tree to measure the balance factor
 * Return: balance
 */

int height(const binary_tree_t *node)
{
	int left_height = 0;
	int right_height = 0;

	if (node == NULL)
		return (0);

	left_height = height(node->left);
	right_height = height(node->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}
