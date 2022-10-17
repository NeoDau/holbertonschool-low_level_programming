#include "main.h"
/**
 *primeNumber - function create
 *@a: value
 *@b: value
 *Return: always 0
 */
int primeNumber(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (b > a / 2)
	{
		return (1);
	}
	else
	{
		return (primeNumber(b + 1, a));
	}
}
/**
 *is_prime_number - function primeNumber
 *@n: value
 *Return: n
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (primeNumber(2, n));
	}
}
