#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data of a list
 * @head: the head
 * Return: return
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
