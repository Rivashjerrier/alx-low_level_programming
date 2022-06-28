#include "main.h"
#include <stdlib.h>

/**
 * strdup - copies a string to a newly allocated space in memory
 *
 * @str: string to copy
 *
 * Return: NULL if str = NULL, NULL if insufficient is available
 * pointer to duplicated string
 *
 */
char *strdup(char *str)
{
	unsigned int x, y;
	char *s;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; ++x)
		++y;
	s = malloc((y + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; str[x]; ++x)
		s[x] = str[x];
	s[y] = '\0';
	return (s);
}
