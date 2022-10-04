#include "main.h"
/**
 *print_numbers - function that numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n <= '9')
		{
			putchar(n);
		}
	}
	putchar('\n');
}
