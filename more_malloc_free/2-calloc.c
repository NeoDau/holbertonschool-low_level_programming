#include "main.h"
/**
 *_calloc - function memory array
 *@nmemb: int
 *@size: int
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pr = malloc(nmemb * size);
	if (pr == NULL)
	{
		return (NULL);
	}
	return (pr);
}
