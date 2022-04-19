#include "holberton.h"
/**
<<<<<<< HEAD
 * print_numbers - prints the digits 1-9
 */
void print_numbers(void)
{
  int i = 0;

  while (i <= 9)
    {
      _putchar(i + '0');
      ++i;
    }
  _putchar('\n');
=======
 * print_numbers - prints no with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
