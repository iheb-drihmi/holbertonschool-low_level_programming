#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that return the nth node in listint_t list
 * @head: pointer
 * @index: index
 * Return: return
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp = head;

	while (tmp && (counter < index))
	{
		tmp = tmp->next;
		counter++;
	}

	if (counter < index)
		return (NULL);

	return (tmp);
}
