#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int v, p;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (p = 1, v = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
			v += p;
	}

	return (v);
}
