#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: return.
 */

void free_list(list_t *head)
{
list_t *f;

while ((f = head) != NULL)
{
head = head->next;
free(f->str);
free(f);
}
}
