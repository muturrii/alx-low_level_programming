#include<stdio.h>
/**
 * main - computes the sum
 * Return: no return
 */
int main(void)
{
	int result = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result = result + i;
	}
	printf("%d\n", result);
	return (0);
}
