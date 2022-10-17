#include "main.h"
/**
 *_strlen - returns the length
 *@s: char
 *Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}

	return (a);
}
