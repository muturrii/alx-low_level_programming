#include "main.h"
/**
* print_most_numbers - contains most of code to print strings
*
* Return: no return value
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
