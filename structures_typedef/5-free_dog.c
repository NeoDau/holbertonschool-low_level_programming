#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_dog - free dogs
 *@d: structure free
 *Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d !== NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
