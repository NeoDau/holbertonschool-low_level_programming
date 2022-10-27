#include "dog.h"
#include <stddef.h>
/**
 *init_dog - function initialize a variable
 *@d: pointer that store dogs
 *@name: store name dogs
 *@age: age of dogs
 *@owner: pointer that store owner of dogs
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
