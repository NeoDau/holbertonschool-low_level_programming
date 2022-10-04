#include "main.h"
/**
 *print_diagonal - diagonal line
 *@n: value function
 */

void print_diagonal(int n)
{
	char c;
	char d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d <= c; d++)
		{
			if (c == d)
			{
				putchar('\\');
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
	}
}
