#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *new_dog - create new dog
 *@name: pointer
 *@age: age of dog
 *@owner: pointer
 *Return: pointer a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *nd;

	nd = (dog_t *)malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	for (a = 0; name[a]; a++)
	{}
	for (b = 0; owner[b]; b++)
	{}
	nd->name = malloc(a * sizeof(nd->name));
	if (nd ->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	{
		nd->name[c] = name[c];
	}
	nd->age = age;
	nd->owner = malloc(b * sizeof(nd->owner));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
	{
		nd->owner[c] = owner[c];
	}
	return(nd);
}
