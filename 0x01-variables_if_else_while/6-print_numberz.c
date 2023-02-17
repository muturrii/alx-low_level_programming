#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main - contains most of code to print strings
*
* Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
