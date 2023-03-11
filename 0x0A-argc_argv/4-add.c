#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the product of the numbers
 * @argc: the number of arguments
 * @argv: stores the arguments
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (strlen(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
