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
	char lett = 'a';
	char alph = 'A';
	int i;

	for (i = 0; i < 26; i++)
		putchar(lett + i);
	for (i = 0; i < 26; i++)
		putchar(alph + i);
	putchar('\n');
	return (0);
}
