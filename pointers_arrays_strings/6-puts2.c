#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - function
 *@str: value
 *Return: Always 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; a < _strlen(str); a++)
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
	}
	putchar('\n');
}
