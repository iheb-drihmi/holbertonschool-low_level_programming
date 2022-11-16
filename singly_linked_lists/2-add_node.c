#include <stdlib.h>
#include <string.h>
#include "lists.h"

#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: head
 * @str: string
 * Return: return
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t newchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[newchar]; newchar++)
	{
		;
	}

	new->len = newchar;
	new->next = *head;
	*head = new;

	return (*head);
}
