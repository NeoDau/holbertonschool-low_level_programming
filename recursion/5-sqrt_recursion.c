#include "main.h"
/**
 *sqr_recursion - function returns natural square
 *@a: value int
 *@b: value int
 *Return: Always 0
 */
int sqr_recursion(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
	{
		return (sqr_recursion(a, b + 1));
	}
}
/**
 *_sqrt_recursion - functoin returns natural saquare
 *@n: value
 *Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqr_recursion(n, 1));
	}
}
