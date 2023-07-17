#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - enter point
 * Return: Always 0 (success)
 */
int main()
{
	char *text = "and that piece of art is useful" - Dora Korpar, 2015-10-19\n";
	write(2, text, 47);
	return (1);
}
