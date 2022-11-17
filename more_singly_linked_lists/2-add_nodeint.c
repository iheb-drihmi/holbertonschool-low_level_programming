#include<stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - a function that adds a new node at beginning of a list
 *
 * @head: pointer
 * @n: the added
 * Return: return
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (*head == NULL)
		new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
