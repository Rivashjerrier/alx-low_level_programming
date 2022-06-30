#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 *
 * Return: NULL if function fails
 * pointer to newly allocated space in memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = n;
	for (y = 0; s1[y]; ++y)
		++y;
	p = malloc(sizeof(char) * (x + 1));
	if (!p)
		return (NULL);
	x = 0;
	for (y = 0; s1[y]; ++y)
		p[++x] = s1[y];
	for (y = 0; s2[y] && y < n; ++y)
		p[++x] = s2[y];
	p[x] = '\0';
	return (p);
}
