#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - function
 *@s: value.
 *
 */

void rev_string(char *s)
{
	int x;
	int y;
	int a;

	y = _strlen(s);

	for (x = 0; x < y / 2; x++)
	{
		a = s[x];
		s[x] = s[y - x - 1];
		s[y - x - 1] = a;
	}
}
