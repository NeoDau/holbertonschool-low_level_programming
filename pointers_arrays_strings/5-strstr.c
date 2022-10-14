#include "main.h"
int _strncmp(char *s1, char *s2, int n);
/**
 *_strstr - function
 *@haystack: longer string
 *@needle: substring
 *Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	char *aux = haystack;
	for (; *aux; aux++)
	{
		if (_strncmp(aux, needle, _strlen(needle)) == 0)
			return (aux);
	}
	return (NULL);
}
/**
 *_strcmp - function two strings
 *@s1: char
 *@s2: char
 *Return: s1[a] & s2[a].
 */
int _strncmp(char *s1, char *s2, int n)
{
	int a = 0;

	for (a = 0; a < n && s1[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
/**
 *_strlen - returns the length
 *@s: char
 *Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
