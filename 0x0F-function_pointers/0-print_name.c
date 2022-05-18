#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The nme 2 b printed.
 * @f: A pointer 2 a function that prints a nme.
 */

void print_name(char *name, void (*f)(char *))
{
  if (name == NULL || f == NULL)
    return;

  f(name);
}
