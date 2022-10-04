#include "main.h"
/**
 *print_line - line in terminal.
 *@n: value function
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
