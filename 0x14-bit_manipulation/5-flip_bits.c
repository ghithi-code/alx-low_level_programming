#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert  number to another number
 * @n: first number
 * @m: second number to convert
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}
