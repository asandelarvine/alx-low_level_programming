#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: void
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
