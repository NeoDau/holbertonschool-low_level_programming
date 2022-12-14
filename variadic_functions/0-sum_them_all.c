#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function return the sum parameters
 *@n: the numbers of arguments
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);

	return (sum);
}
