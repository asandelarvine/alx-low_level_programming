#include "holberton.h"
/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: 0 on success.
 */
<<<<<<< HEAD
void print_most_numbers(void)
{
  int i = 0;

  while (i <= 9)
    {
      if (i != 2 && i != 4)
	_putchar(i + '0');
      ++i;
    }
  _putchar('\n');
=======

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			;
		else
			_putchar(number);
	}
	_putchar('\n');
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
