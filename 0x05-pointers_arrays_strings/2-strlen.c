#include "main.h"
#include <string.h>

/**
 *_strlen - Returns the length of a string
 *@s: This is the pointer of the string to be checked
 *Return: void
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
