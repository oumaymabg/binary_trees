#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if node is a leaf
 *
 * @node: Pointer to the node
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!(*node).left && !(*node).right)
	{
		return (1);
	}
	return (0);
}