#include "main.h"
/**
 *malloc_checked - function allocates memory
 *@b: int
 *Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(int) + b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
