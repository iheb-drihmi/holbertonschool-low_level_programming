#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
*list_len - a function that return the number of elements in a linked list
*@h: the list
*Return: Return nodes
*/
size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h)

{
nodes++;
 h = h->next;
}
return (nodes);
}
