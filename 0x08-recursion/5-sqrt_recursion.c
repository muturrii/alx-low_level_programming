#include "main.h"
/**
 * suareroot - calculates squareroot
 * @n: holds the number to be squarerooted
 * @z: holds potential squareroot
 * Return: squareroot or -1 if no natural squareroot
 */
int suareroot(int n, int z)
{
	int sroot = z * z;

	if (sroot < n)
		return (suareroot(n, z + 1));
	if (sroot > n)
		return (-1);
	if (sroot == n)
		return (z);
	return (-1);
}
/**
 * _sqrt_recursion - holds number to be squarerooted
 * @n: holds number to be squarerooted
 * Return: squareroot or -1 if no natural squareroot
 */
int _sqrt_recursion(int n)
{
	return (suareroot(n, 1));
}
