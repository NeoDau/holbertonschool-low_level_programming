#include "main.h"
/**
 *print_triangle - #####
 *@size: triangle
 */

void print_triangle(int size)
{
	int n;
	int e;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
		for (e = size - n; e > 1; e--)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
