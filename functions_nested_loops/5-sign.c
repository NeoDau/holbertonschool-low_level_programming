#include "main.h"
/**
 *print_sign - nes if the input number greater, iqual or less than zero.m
 *@n: the input namber
 *
 *Return: 1 is greater than zero. 0 is zero. -1 is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);

	}
}
