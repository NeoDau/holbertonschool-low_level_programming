#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy - function copies a string
 *@dest: pointer
 *@src: paramet
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
