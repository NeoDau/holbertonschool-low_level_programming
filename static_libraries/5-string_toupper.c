#include "main.h"
/**
 *string_toupper - function lowercase
 *@b: char
 *Return: value
 */

char *string_toupper(char *b)
{
	int a;

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] >= 'a' && b[a] <= 'z')
		{
			b[a] = b[a] - 32;
		}
	}
	return (b);
}
