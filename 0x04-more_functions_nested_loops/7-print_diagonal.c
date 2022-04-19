#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 * @n: the number of lines to print
 */
<<<<<<< HEAD
void print_diagonal(int n)
{
  int i, j;

  if (n > 0)
    {
      for (j = 1; j <= n; j++)
	{
	  for (i = 1; i <= j; i++)
	    {
	      if (i != 1)
		_putchar(' ');
	      if (i == j)
		{
		  _putchar('\\');
		  _putchar('\n');
		}
	    }
	}
    }
  else
    _putchar('\n');
=======

void print_diagonal(int n)
{
	int row, num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
