#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return: success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
