#include <stdio.h>
/**
 * main - prints no of arguments of program
 * @argc: contains number of arguments
 * @argv: array of strings passed
 * Return: return (0) Success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
