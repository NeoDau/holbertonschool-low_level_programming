#include "main.h"

/**
 *times_table - that prints the 9 times table
 *
 */

void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int x = num1 * num2;

			if (num2 == 0)
			{
				putchar('0');
			}
			else if (x <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(x + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
			}
		}
		putchar('\n');
	}
}
