#include <stdio.h>
/**
 * main - prints the string
 * main is Entry point
 * @filedes: return value
 * @buf: string
 * @nbyte: length
 * Return: Always 0 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(int argc, char **argv)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
