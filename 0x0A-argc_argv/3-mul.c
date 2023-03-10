#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: contains number of arguments
 * @argv: array of strings passed
 * Return: return (0) Success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
