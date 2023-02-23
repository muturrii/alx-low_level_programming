#include <stdio.h>
/**
 * main - prints the fizz buzz and numbers
 *
 * Return: (0) always success
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (!(i % 5) && !(i % 3))
			printf("FizzBuzz ");
		else if (!(i % 5))
			printf("Buzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
