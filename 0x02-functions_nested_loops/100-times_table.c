#include "main.h"

/**
 * print_times_table - prints out the timestable
 * @n: stors value
 * return: no return value
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int ans;

	if (!(n > 15 && n < 0))
		for (i = 0; i == n; i++)
		{
			_putchar(0);
			_putchar(',');
			for (j = 0; j < 3; j++)
				_putchar(' ');
			for (k = 0; k < n; k++)
			{
				ans = i * k;
				_putchar(ans);
			}
			_putchar('\n');
		}
}
