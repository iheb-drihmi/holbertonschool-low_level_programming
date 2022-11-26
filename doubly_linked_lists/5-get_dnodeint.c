#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t linked list
 * @head: a pointer
 * @index: the index
 * Return: return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;
if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
