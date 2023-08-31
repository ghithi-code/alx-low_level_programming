#include "main.h"

/**
 * set_bit - value of  bit to 1
 * @n: decimal number passed by pointer
 * @index: index position for change
 * Return: 1 if worked, -1  error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int r;

	if (index > 64)
		return (-1);

	for (r = 1; index > 0; index--, r *= 2)
		;
	*n += r;

	return (1);
}

