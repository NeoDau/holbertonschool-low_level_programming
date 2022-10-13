#include "main.h"
/**
 *_strstr - function
 *@haystack: longer string
 *@needle: substring
 *Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (b = 0; needle[b] != '\0'; b++)
	{}
		for (a = 0; haystack[a] != '\0'; a++)
		{
			if (needle[b] != haystack[a])
			{
				break;
			}
		}
		if (a != b)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	return (NULL);
}
