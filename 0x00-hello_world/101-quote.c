#include <sys/syscall.h>
/**
 * main - prints the string
 * main is Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-1
		9\n";
	syscall(SYS_write, 1, msg, sizeof(msg));
	return (0);
}