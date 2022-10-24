#include "main.h"
/**
 *_calloc - function memory array
 *@nmemb: int
 *@size: int
 *Return: pr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
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
	for (a = 0; a < nmemb * size; a++)
	{
		*(pr + a) = 0;
	}
	return (pr);
}
