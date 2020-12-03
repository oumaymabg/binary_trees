#include "binary_trees.h"
/**
 * binary_tree_insert_left - Binary tree node left insertion
 *
 * @parent: Pointer to the parent node
 * @value: Value of the new node
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if ((*parent).left)
	{
		(*new).left = (*parent).left;
		(*(*parent).left).parent = new;
	}

	(*parent).left = new;

	return (new);
}
