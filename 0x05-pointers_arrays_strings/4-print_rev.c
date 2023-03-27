#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length])
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

