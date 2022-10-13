#include "main.h"
/**
 *_strchr - function locates a character in a string
 *@s: string
 *@c: chararter
 *Return: s
*/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0' ; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (!c ? s : NULL);
}
