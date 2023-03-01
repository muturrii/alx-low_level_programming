#include <stdio.h>

/**
 * print_array - prints the string onto stdout
 * @a: holds the address of the string
 * @n: number of values tobe printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

