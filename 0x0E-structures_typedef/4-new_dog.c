#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;	
	char *namecopy, *ownercopy;
	int i; 

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	namecopy = malloc(sizeof(name));
	if (namecopy == NULL)
		return (NULL);
	ownercopy = malloc(sizeof(owner));
	if (ownercopy = NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		*namecopy = name[i];

	for (i = 0; owner[i] != '\0'; i++)
		*ownercopy = owner[i];

	dog->name = namecopy;
	dog->age = age;
	dog->owner = ownercopy;

	return (dog);
}
