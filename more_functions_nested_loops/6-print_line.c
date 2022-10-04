#include "main.h"
/**
 *print_line - 
 *@n:
 *
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		putchar('_');
	}
	putchar('\n');
}
