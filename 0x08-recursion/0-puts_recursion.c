#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}