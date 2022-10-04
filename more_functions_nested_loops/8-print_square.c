#include "main.h"
/**
 *print_square - prints
 *@size: value
 */

void print_square(int size)
{
	int uno;
	int dos;

	if (size <= 0)
		putchar('\n');
	for (uno = 0; uno < size; uno++)
	{
		for (dos = 0; dos < size; dos++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
