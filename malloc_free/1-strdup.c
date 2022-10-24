#include "main.h"
/**
 *_strdup - function pointer to a newly allocated space in memor
 *@str: char
 *Return: s
 */
char *_strdup(char *str)
{
	char *dr;
	int a;
	int b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{}
	dr = malloc(sizeof(char) * a + 1);

	if (dr == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		dr[b] = str[b];
	}
	return (dr);
}
