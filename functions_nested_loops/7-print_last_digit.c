#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number.
 *@num: input number.
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int n = (num % 10);
	int m = -n;

	if (n >= 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(m + '0');
		return (m);
	}
}
