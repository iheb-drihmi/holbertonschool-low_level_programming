#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer
 * Return: return
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int number;

    if (!head || !*head)
        return (0);

    number = (*head)->n;
    tmp = (*head)->next;
    free(*head);
    *head = tmp;

    return (number);
}