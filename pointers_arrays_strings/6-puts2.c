#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - 
 *@str: value
 *
 */

void puts2(char *str);
{
	int a;

	for (a = 0; a < _strlen(str); a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
