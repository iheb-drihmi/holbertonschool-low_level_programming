#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds  a new node at the beginning of list_t list
 * @new_element: address of node
 * @str: New node to add
 * Return: return
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element_ptr = malloc(sizeof(list_t));

	new_node = malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		return (NULL);
	}
	else
	{
		new_element->str = strdup(str);
		new_element->len = length;
		new_element->next = *head;
		*head = new;
		return (new_head);
	}
}









