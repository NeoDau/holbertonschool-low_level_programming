#include <stdio.h>
/**
 *main -  num 1 & 100
 *@void: no argument
 *Return: Success 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");

		else if (num % 5 == 0)
			printf("Buzz");

		else if (num % 3 == 0)
			printf("Fizz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
