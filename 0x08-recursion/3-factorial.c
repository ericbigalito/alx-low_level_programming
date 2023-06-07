#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: factorial of number
 */
int factorial(int n)
{
	int f;

	f = 0;
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	f = n * factorial(n - 1);
	return (f);
}
