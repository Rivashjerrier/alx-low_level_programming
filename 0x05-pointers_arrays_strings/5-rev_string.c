#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be processed
 */
void rev_string(char *str)
{
	int i, length;
	char temp;

	length = _strlen(str);
	for (i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}
