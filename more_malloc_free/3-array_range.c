#include "main.h"
/**
 *array_range - function create array
 *@min: int
 *@max: int
 *Return: pr
 */
int *array_range(int min, int max)
{
	int a;
	int b;
	int *pr;

	if (min > max)
	{
		return (NULL);
	}
	b = (min - max) + 1;
	pr = malloc(b * sizeof(*pr));
	if (pr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b && min <= max; a++)
	{
		*(pr + a) = min;
	}
	return (pr);
}
