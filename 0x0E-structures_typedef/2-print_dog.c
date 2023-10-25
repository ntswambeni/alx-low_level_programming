#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: pointer to a dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
