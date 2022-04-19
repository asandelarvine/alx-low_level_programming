#include "holberton.h"
/**
 * print_line - draws a straight line (n) characters long.
 * @n: the number of underscores to print.
 */
<<<<<<< HEAD
void print_line(int n)
{
  int i;

  if (n > 0)
    for (i = 0; i < n; i++)
      _putchar('_');
  _putchar('\n');
=======

void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
