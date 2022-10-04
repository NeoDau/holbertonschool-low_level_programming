#include "main.h"
/**
 *print_most_numbers - numbers from 0 & 9 do not print 2 & 4
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if(n != '2' && n != '4')
		{
			putchar(n);
		}
	}
	putchar('\n');
}
