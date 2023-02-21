#include "main.h"

/**
 * times_table - prints out the timestable
 *
 * return: no return value
 */
void times_table(void)
{
	int j;
	int k;
	int i;
	int ans;

	for (i = 0; i < 10; i++)
	{
		_putchar(0);
		_putchar(',');
		for (j = 0; j < 2; j++)
			_putchar(' ');
		for (k = 0; k < 10; k++)
		{
			ans = i * k;
			_putchar(ans);
		}
		_putchar('\n');
	}
}
