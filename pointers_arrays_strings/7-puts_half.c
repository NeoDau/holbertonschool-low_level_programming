#include "main.h"
/**
 *puts_half - function printf half
 *@str: value
 */

void puts_half(char *str)
{
	int a;
	int b = 0;

	if(_strlen(str) % 2 != 0)
	{
		b += 1;
	}

	for (a = (_strlen(str) + b) / 2; a < _strlen(str); a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
