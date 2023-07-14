#include <stdio.h>
/**
 * main - entery point
 *Return: always 0
 */
int main(void)
{
	printf("Size of char: %zd byte(s)", sizeof(char));
	printf("Size of an int: %zd byte(s)", sizeof(int));
	printf("Size of a long int %zd byte(s)", sizeof(long int));
	printf("Size of long long int: %zd byte(s)", sizeof(long long int));
	printf("Size of a float: %zd byte(s)", sizeof(float));
	return (0);
}
