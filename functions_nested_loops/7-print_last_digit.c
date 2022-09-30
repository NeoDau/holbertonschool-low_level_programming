#include "main.h"
/**
 *print_lastdigit - Prints the last digit of a number.
 *@num: input number
 *
 * Return: last digit
 */

int print_lastdigit(int num)
{
	int n = num % 10;
	int m = -n;

	if (n >= 0)
	{
		putchar(n + '0');
		return (n);
	}
	else
	{
		putchar(m + '0');
		return (m);
	}
}
