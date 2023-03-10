#include <stdio.h>
/**
 * main - prints all arguments and name of program
 * @argc: contains number of arguments
 * @argv: array of strings passed
 * Return: return (0) Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
