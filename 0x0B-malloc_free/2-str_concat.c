#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2 to concatenate
 * Return: string after concatenates
 */
char *str_concat(char *s1, char *s2)
{
	char *cocat;
	int i, j, l1, l2, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		;
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		;
	}
	size = l1 + l2;
	cocat = malloc(size * sizeof(char) + 1);
	if (cocat == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < size + 1; i++)
	{
		if (i < l1)
		{
			cocat[i] = s1[i];
		}
		else
		{
			cocat[i] = s2[j++];
		}
	}
	return (cocat);
}
