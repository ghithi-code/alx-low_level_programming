#include "main.h"

/**
 * get_endianness - check
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}

