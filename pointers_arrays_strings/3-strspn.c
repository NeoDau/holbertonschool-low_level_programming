#include "main.h"
/**
 *_strspn - function length of a prefix
 *@s: value
 *@accept: 
 *Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
