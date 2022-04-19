#include "holberton.h"
/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @n: the number of # to print in each line.
 */
<<<<<<< HEAD
void print_square(int n)
{
  int i, j;

  if (n > 0)
    {
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    _putchar('#');
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
=======

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
