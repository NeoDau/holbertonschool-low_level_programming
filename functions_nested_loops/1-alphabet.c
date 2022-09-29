#include "main.h"
/**
 *print_alphabet - Print the alphabet in lowercase.
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a >= 'z'; a++)
	{
		_putchar(a);
	}
	putchar('\n');
}
