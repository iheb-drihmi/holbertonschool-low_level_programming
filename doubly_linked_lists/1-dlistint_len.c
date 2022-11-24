#include "lists.h"
/**
* dlistint_len - a function that returns the number of elements in a linked list
*@h: the header
*Return: return
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t node = 0;
    while (h)
    {
        node++;
        h = h->next;
    }
    return (node);
}
