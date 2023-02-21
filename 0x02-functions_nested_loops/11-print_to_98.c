#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from the value to 98
 * @n: holds value to be used
 * return: no return
 */
void print_to_98(int n)
{
	int i;
	int z;

	if (n > 98)
	{
		z = n - 98;
		for (i = 0; i < z; i++)
		{
			printf("%d",n - i);
			printf(", ");
		}
		printf("98\n");
	}
	else if (n == 98)
		printf("98\n");
	else
	{
		z = 98 - n;
		for (i = 0; i < z; i++)
		{
			printf("%d",n + i);
			printf(", ");
		}
		printf("98\n");
	}
}
