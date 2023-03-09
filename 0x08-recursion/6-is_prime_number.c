#include "main.h"
/**
 * isprime - chechs if number is prime
 * @n: holds number to be checked
 * @z: holds divisor
 * Return: returns 1 if prime and 0 if not
 */
int isprime(int n, int z)
{
	if (z > (n / 2) + 1)
		return (1);
	if (n == 2 || n == 3)
		return (0);
	if (n < 2)
		return (0);
	if (n / z != 0)
		return (0);
	return (isprime(n, (z + 1)));
}
/**
 * is_prime_number - checks if number is prime
 * @n: holds number to be checked
 * Return: returns 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (isprime(n, 2));
}
