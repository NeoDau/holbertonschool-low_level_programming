#include <stdio.h>
#include <stdlib.h>
/**
 *main - function multiples two numbers
 *@argc: int
 *@argv: char
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);

	return (0);
}
