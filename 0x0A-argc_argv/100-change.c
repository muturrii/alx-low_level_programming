#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the number of cents
 * @argc: the number of arguments
 * @argv: stores the arguments
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
	int i;
	int temp;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	temp = i % 25;
	sum += i / 25;
	sum += temp / 10;
	temp = temp % 10;
	sum += temp / 5;
	temp = temp % 5;
	sum = sum + (temp / 2) + (temp % 2);
	printf("%d\n", sum);
	return (0);
}
