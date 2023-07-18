#include "main.h"

/**
 * @c: the character to be checked 
 * _isalpha - check for alphabetic
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
