#include "lists.h"

/**
 *  sum_dlistint - a function that returns the sum
 * @head: a pointer
 * Return: return
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;
        for (i = head; i != NULL; i = i->next)
	{
		sum = sum + i->n;
	}

	return (sum);
}

