#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int nueve;

	for (nueve = '0'; nueve <= '9'; nueve++)
	{
		putchar(nueve);
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
}

