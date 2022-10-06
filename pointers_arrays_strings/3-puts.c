#include "main.h"
/**
 *_puts - function
 *@str: value
 *Return: Always 0
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
