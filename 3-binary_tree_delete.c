#include "binary_trees.h"
/**
 * binary_tree_delete - Delete tree node
 *
 * @tree: Pointer to the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	{
		binary_tree_delete((*tree).left);
	}
	if ((*tree).right)
	{
		binary_tree_delete((*tree).right);
	}
	free(tree);
}
