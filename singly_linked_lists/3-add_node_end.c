#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * add_node_end - a function that adds a new node at the end
 * @head: head
 * @str: string
 * Return: return
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
size_t newchar;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (newchar = 0; str[newchar]; newchar++)
    ;

new->len = newchar;
new->next = NULL;
tmp = *head;

if (tmp == NULL)
{
*head = new;
}
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}

return (*head);
}







