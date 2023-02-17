#include <stdio.h>
/**
* main - contains most of code to print strings
*
* Return: always 0 (success)
*/
int main(void)
{
	char lett = 'a';
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (i = 0; i < 6; i++)
		putchar(lett + i);
	putchar('\n');
	return (0);
}
