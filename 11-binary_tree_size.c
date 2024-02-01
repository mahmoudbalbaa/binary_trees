#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 * Return: size number
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0,
	       l = 0,
	       r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l = binary_tree_size(tree->left);

	if (tree->right != NULL)
		r = binary_tree_size(tree->right);

	s = 1 + l + r;

	return (s);
}
