#include "main.h"
/**
 *string_nconcat - function two string
 *@s1: char
 *@s2: char
 *@n: int
 *Return: pr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/**	int a;
	unsigned int b;
	char *pr;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (a = 0; s1[a] != '\0'; a++)
	{}
	pr = malloc(sizeof(char) * (a + n + 1));
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
		pr[a] = s2[b];
		a++;
	}
	pr[a] = '\0';
	return (pr);
}*/
{
	char *pr;
	int a;
	int b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	pr = malloc(sizeof(char) * (a + b + 1));

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
		pr[a] = s2[b];
		a++;
	}
	pr[a] = '\0';
	return (pr);
}
