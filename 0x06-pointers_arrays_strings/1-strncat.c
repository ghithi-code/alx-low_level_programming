#include "main.h"

/**
 * _strncat - concatenates n bytes from string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
 
