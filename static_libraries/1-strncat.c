#include "main.h"
/**
 *_strncat - function two strings
 *@dest: char
 *@src: char
 *@n: int
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
}
