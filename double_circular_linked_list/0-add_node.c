#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_node_begin - Add a new node to the beginning of a double circular
 *
 * @list: A pointer to the head of the linkd list
 * @str: The string to copy into the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node;
	List *last_node;

	if (!list)
		return (NULL);
	new_node = malloc(sizeof(List));
	if (!new_node)
		return (NULL);
	new_node->str = str;
	if (!*list)
		{
		new_node->prev = new_node;
		new_node->next = new_node;
		*list = new_node;
		return (new_node);
		}
	last_node = (*list)->prev;
	new_node->next = *list;
	new_node->prev = last_node;
	last_node->next = new_node;
	(*list)->prev = new_node;
	*list = new_node;
	return (new_node);
}

/**
 * add_node_end - Add a new node to the end of a double circular
 *
 * @list: A pointer to the head of the linkd list
 * @str: The string to copy into the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */

List *add_node_end(List **list, char *str)
{
	List *new_node;
	List *last_node;

	if (!list)
		return (NULL);
	new_node = malloc(sizeof(List));
	if (!new_node)
		return (NULL);
	new_node->str = str;
	if (!*list)
		{
		new_node->prev = new_node;
		new_node->next = new_node;
		*list = new_node;
		return (new_node);
		}
	last_node = (*list)->prev;
	new_node->next = *list;
	new_node->prev = last_node;
	last_node->next = new_node;
	(*list)->prev = new_node;
	return (new_node);
}
