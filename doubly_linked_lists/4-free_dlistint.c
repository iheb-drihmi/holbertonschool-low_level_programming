#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: a pointer
 * Return: return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
if (!head)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}



