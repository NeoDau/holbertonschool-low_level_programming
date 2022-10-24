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
	int b = 0;
	int *pr;

	if (min > max)
	{
		return (NULL);
	}
	pr = malloc(sizeof(int) * (max - min + 1));
	if (pr == NULL)
	{
		return (NULL);
	}
	for (a = min; a <= max; a++)
	{
		pr[b] = a;
		b++;
	}
	return (pr);
}
