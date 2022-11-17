#include "lists.h"
#include<stdlib.h>
#include<stdio.h>


/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
*head = NULL;
}
