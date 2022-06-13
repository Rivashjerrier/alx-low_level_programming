#include "main.h"

/**
 * prints_half - prints half of a string
 * followed by a new line
 * @str: string to be processed
 * Description: if the number of characters are odd
 * print the last n characters of the string
 * where n=(length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[i]);
	_putchar('\n');
}
