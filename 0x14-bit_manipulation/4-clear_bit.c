#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int v;
	unsigned int k;

	if (index > 64)
		return (-1);
	k = index;
	for (v = 1; k > 0; v *= 2, k--)
		;

	if ((*n >> index) & 1)
		*n -= v;

	return (1);
}

