#include "main.h"
/**
 * _sqrt - helper function
 * @i: increminter to compare against n
 * @n: number to determain if square root
 * Return: square root if natural square root
 * -1 if there not have square root
 */
int _sqrt(int i, int n)
{
	if (i <= n / 2)
	{
		if (n == 1)
		{
			return (n);
		}
		if (i * i != n)
		{
			return (_sqrt(i + 1, n));
		}
		return (i);
	}
	return (-1);
}
/**
 * _sqrt_recursion - function that return
 * natural square root of a number
 * @n: number
 * Return: natural square root of number
 * -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
