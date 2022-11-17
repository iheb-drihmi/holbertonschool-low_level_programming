#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: head
 * @index: index
 * Return: return
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *last;
	listint_t *next;

	last = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && last != NULL; a++)
		{
			last = last->next;
		}
	}

	if (last == NULL || (last->next == NULL && index != 0))
	{
		return (-1);
	}

	next = last->next;

	if (index != 0)
	{
		last->next = next->next;
		free(next);
	}
	else
	{
		free(last);
		*head = next;
	}

	return (1);
}
