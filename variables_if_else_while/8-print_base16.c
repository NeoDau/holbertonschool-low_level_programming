#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	int base16;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}
	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
