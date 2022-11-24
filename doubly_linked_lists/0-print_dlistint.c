#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* print_dlistint - a function that prints all the elements 
*@h: the header
*Return: return
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t node = 0;
    while (h)
    {
        node++;
        printf("%d\n" , h->n);
        h = h->next;

    }
    return (node);
}