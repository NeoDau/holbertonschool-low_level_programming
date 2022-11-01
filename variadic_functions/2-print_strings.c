#include "variadic_functions.h"
/**
 *print_strings - function print string
 *@separator: string between string
 *@n: number of string
 *Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *og;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		og = (va_arg(ap, char*));
		if (og != NULL)
			printf("%s", og);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
