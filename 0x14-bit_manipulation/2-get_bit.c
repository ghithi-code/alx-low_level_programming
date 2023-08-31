#include "main.h"
#include <stdio.h>
/**
 * get_bit - value of bit
 * @n: number to evaluate
 * @index: start index from 0
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index > 64)
		return (-1);

	k = n >> index;

	return (k & 1);
}

