#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
*print_list - print all elements
*@h: the list
*Return: Return nodes
*/


size_t print_list(const list_t *h)
{
	size_t nodes = 0;


while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;

}

	return (nodes);
}
