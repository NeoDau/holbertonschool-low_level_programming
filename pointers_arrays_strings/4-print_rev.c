#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - function in reverse
 *@s: char
 *Return: Always - 0
 */
void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
