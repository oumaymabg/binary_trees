#include "binary_trees.h"
/**
 * binary_tree_height - Holberton
 *
 * @tree: Pointer to the tree
 * Return: Length  of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	l = 0;
	r = 0;
	if (tree->left)
		l += 1;
	if (tree->right)
		r += 1;
	r += binary_tree_height(tree->right);
	l += binary_tree_height(tree->left);
	if (r > l)
		return (r);
	return (l);
}
