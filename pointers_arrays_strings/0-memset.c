#include "main.h"
/**
 *_memset - memory byte
 *@s: pointer 
 *@n: number byte
 *@b: constant: byte
 *Return: pointer *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
