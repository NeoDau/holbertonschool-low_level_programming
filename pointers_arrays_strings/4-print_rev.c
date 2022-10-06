#include "main.h"
/**
 *print_rev - function in reverse
 *@s: char
 *Return: Always - 0
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (a = a - 1; a >= 0; a--)
		{
			putchar(s[a]);
		}
		putchar('\n');
	}
}
