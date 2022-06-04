#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

