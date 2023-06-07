#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string that we want to now its lenght
 * Return: the lenght of string has been inserted
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s == '\0')
	{
		return (0);
	}
	l = 1 + _strlen_recursion(s + 1);
	return (l);
}
