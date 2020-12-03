#include "binary_trees.h"
/**
 * binary_tree_depth - Checks the depth of a tree
 * @node:  a pointer to the root of the tree
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{

	{
		size_t count = 0;

			if (node == NULL)
				return (count);
			while (node->parent != NULL)
			{
				count++;
				node = node->parent;
			}
			return (count);
	}
}