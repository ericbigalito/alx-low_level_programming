#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strd;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	strd = malloc(i * sizeof(char) + 1);
	if (strd == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		strd[j] = str[j];
	}
	strd[j] = '\0';
	return (strd);

}
