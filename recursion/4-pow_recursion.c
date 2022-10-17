#include "main.h"
/**
 *_pow_recursion - function return value of x
 *@x: value
 *@y: raise to the power
 *Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}