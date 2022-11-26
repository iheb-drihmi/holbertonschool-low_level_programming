#include "lists.h"
/**
 * free_dlistint - a function that frees a linked list
 * @head: pointer
 */
void free_listint(dlistint_t *head)
{
    listint_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

