#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
* add_dnoeint - a function that adds a new node at the begin
*@head: a pointer
*@n: a num
*Return: return
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
    {
        return (NULL);
    }
    new_node->n = n;
    new_node->precedant = NULL;
    new_node->suivant = *head;
    if (*head)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;
    return (new_node);
}

