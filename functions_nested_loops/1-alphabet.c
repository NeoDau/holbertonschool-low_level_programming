#include "main.h"
/**
 *print_alphabet - Print the alphabet in lowercase.
 *
 *Return: void
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a >= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (void);
}
