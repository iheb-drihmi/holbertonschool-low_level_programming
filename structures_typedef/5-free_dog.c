#include "dog.h"
#include<stdlib.h>
#include<stdio.h>

/**
*free_dog - Free dog
*@d: The dog 
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}