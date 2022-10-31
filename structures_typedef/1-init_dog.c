#include "dog.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * init_dog - initialiser dog
 * @d: The dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 */
 void init_dog(struct dog *d, char *name, float age, char *owner)
 {
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
 }