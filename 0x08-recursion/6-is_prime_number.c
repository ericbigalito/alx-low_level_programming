#include "main.h"
/**
 * _prime - helper funcion
 * @n: number to check if prime
 * @i: incrementer
 * Return: 1 if the input integer is a prime number
 * 0 otherwise
 */
int _prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > 0 && n % i == 0)
	{
		return (0);
	}
	return (_prime(n, i - 1));
}
/**
 * is_prime_number - function check if integer is a prime number
 * @n: number to be check
 * Return: 1 if the input integer is a prime number
 * 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}

