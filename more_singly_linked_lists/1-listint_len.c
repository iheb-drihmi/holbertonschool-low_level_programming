#include<stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * listint_t list.
 *
 * @h: pointer
 * Return: return
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int counter = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
