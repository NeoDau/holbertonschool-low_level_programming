#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	int a;
	char p[] = {"_putchar"};

	for (a = '0'; a <= '7'; a++)
	{
		putchar(p[a]);
	}
	putchar('\n');
	return (0);
}
