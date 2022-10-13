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

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] != haystack[ia])
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
	}
	return (NULL);
}
