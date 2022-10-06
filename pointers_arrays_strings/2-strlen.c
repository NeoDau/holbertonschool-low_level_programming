#include "main.h"
/**
 *_streln - returns the length
 *@s: value
 *
 *Return: a
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}

	return (a);
}
