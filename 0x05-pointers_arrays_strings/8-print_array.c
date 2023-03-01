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

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[(n - 1)]);
	}
	else
		printf("\n");
}

