#include <stdio.h>

/**
 * print_array - prints the string onto stdout
 * @a: holds the address of the string
 * @n: number of values tobe printed
 * Return: no return
 */
void print_array(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%c, ", a[i]);
	}
	printf("\n");
}

