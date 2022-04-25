#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a string follwed by a new line to stdout
 *@str: This is the string to be printed
 *Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
