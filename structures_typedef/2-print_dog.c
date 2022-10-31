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
 void print_dog(struct dog *d)
 {
    if (d == NULL)
    return;
    if (d->name == NULL)
    printf("Name: (nil)/n");
    else
    printf("Age: %s/n", d->name);
    if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
