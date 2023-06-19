#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of byte to concatenate
 * Return: pointer to a newly allocated space in memory
 * Null if function fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cstr;
	int i, j, l1, l;

	i = 0;
	l1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		l1++;
	}
	l = l1 + n;
	cstr = malloc((l + 1) * sizeof(char));
	if (cstr == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < l; i++)
	{
		if (i < l1)
		{
			cstr[i] = s1[i];
		}
		else
		{
			cstr[i] = s2[j++];
		}
	}
	cstr[i] = '\0';
	return (cstr);

}
