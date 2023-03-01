#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: holds first value
 * @b: holds second value
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
