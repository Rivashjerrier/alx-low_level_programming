#include "main.h"

/**
 * _memcpy - copies memeory area
 *
 * @n: number of bytes
 * @src: memory area source
 * @dest: memory area destination
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *src(src + x);
	return (dest);
}
