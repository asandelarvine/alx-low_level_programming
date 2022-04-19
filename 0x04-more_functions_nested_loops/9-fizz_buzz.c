#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
/**
 * main - Prints the numbers 1 - 100,
 *   instead of multiples of 3, print Fizz
 *   instead of multiples of 5, print Buzz
 *   for multiples of 3 and 5, print FizzBuzz.
(*
* Return: 0 on success.
*/
int main(void)
{
<<<<<<< HEAD
  int i;

  for (i = 1; i <= 100; i++)
    {
      if (i % 3 == 0 && i % 5 == 0)
	printf("FizzBuzz");
      else if (i % 3 == 0)
	printf("Fizz");
      else if (i % 5 == 0)
	printf("Buzz");
      else
	printf("%d", i);
      if (i != 100)
	putchar(' ');
    }
  putchar('\n');
  return (0);
=======
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
>>>>>>> 5cef6008c6e5d0d931e686e29a257688d243c586
}
