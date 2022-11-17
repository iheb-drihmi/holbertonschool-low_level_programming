#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - a function that adds a node at the end of a linked list
 * @head: pointer
 * @n: the new element
 *
 * Return: return
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
