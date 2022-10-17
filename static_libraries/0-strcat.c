#include "main.h"
#include <string.h>
/**
 *_strcat - name function
 *@dest: concatinated destination
 *@src: source
 *Return: they always do
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a + b] = src[a];
	}
	dest[a + b] = '\0';

	return (dest);
}
