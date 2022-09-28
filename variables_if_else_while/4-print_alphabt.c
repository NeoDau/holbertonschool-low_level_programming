#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	char words;

	for (words = 'a'; words <= 'z'; words++)
	{
		if (words != 'q' && words != 'e')
		putchar(words);
	}
	putchar('\n');
	return (0);
}
