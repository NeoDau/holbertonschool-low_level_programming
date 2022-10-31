#include "variadic_functions.h"
/**
 *print_numbers - function prints number
 *@separator: string between numbers
 *@n: number intregers
 *Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(valist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
