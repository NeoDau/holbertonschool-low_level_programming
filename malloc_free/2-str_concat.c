#include "main.h"
/**
 *str_concat - function concatenates two stings
 *@s1: char
 *@s2: char
 *Return: pr
 */
char *str_concat(char *s1, char *s2)
{
	char *pr;
	int a;
	int b;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	pr = malloc(sizeof(char) * (a + b));
	if (pr == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		pr[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		pr[b] = s2[b];
		a++;
	}
	pr[a] = '\0';
	return (pr);
}
