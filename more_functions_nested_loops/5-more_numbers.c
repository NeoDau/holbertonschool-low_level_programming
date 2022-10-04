#include "main.h"
/**
 *more_numbers - number from 0 & 14
 */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				putchar(m / 10 + '0');
			}
			putchar(m % 10 + '0');
		}
		putchar('\n');
	}
}
