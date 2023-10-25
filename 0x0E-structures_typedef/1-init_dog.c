#include "dog.h"

/**
 * init_dog - initializes a variable of type struc dog
 * @d: address of the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}
