#include "holberton.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
<<<<<<< HEAD
  int i, j;

  if (size > 0)
    {
      for (i = 1; i <= size; i++)
	{
	  for (j = size; j >= 1; j--)
	    {
	      if (i < j)
		_putchar(' ');
	      else
		_putchar('#');
	    }
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
=======
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
