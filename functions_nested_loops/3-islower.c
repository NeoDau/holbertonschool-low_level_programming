#include <stdio.h>
#include "main.h"
/**
 *islower - Shows 1 if the input is a
 *@c: Another cases, shows 0
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
