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
	int n;
	int lno;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lno = n % 10;
	if (lno > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lno);
	else if (lno == 0)
		printf("Last digit of %d is %d and is 0\n", n, lno);
	else if (lno < 6 && !(lno == 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lno);
	return (0);
}
