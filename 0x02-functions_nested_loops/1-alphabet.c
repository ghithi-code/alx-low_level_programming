#include "main.h"

/**
 * print_alphabet - start point
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
