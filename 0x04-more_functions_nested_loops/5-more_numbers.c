#include "holberton.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: nothing.
 */
void more_numbers(void)
{
<<<<<<< HEAD
  int i, j;

  i = j = 0;
  while (i < 10)
    {
      while (j <= 14)
	{
	  if (j >= 10)
	    _putchar(j / 10 + '0');
	  _putchar(j % 10 + '0');
	  ++j;
	}
      _putchar('\n');
      j = 0;
      i++;
    }
=======
	int number, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			units = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
