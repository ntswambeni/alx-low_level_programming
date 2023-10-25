#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: pointer to a dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "");
		printf("Age: %f\n", d->age ? d->name : "");
		printf("Owner: %s\n", d->owner ? d->name : "");
	}
}
