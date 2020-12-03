#include "binary_trees.h"
/**
 * binary_tree_node - Binary tree node creator
 *
 * @parent: Pointer to the parent node
 * @value: Value of the new node
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}
	(*new).parent = parent;
	(*new).n = value;
	(*new).left = NULL;
	(*new).right = NULL;
	return (new);
}