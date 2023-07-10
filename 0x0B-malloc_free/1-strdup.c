#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter
 *
 * @str: pointer from type char
 *
 * Return: pointer or if pointer is NULL return NULL
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, r;

	r = 0;
	if (str == NULL)
		return (NULL);

	while (str[r] != '\0')
	{
		r++;
	}
	ptr = malloc(sizeof(char) * (r + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
