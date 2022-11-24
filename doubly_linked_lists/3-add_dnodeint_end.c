#include"lists.h"
#include<stdio.h>
/**
*add_dnodeint_end - adds a node at the end
*@head: a pointer
*@n: a num
*Return: return
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *tmp;
    new_node = malloc(sizeof(dlistint-t));
    if (new_node == NULL || head == NULL)
    return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    tmp = *head;
    if (*head == NULL)
    {
        *head = new_node;
        return = (new_node);

    }
    else 
    {
        while (tmp->next != NULL)
        tmp = tmp->next;
        new_node->prev = tmp;
        tmp->next = new_node; 
    }
    return (new_node);
}