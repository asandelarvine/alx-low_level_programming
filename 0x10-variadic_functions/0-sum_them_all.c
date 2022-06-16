#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int tot_sum = 0;
	unsigned int  i;
	va_list pntr;

	if (n == 0)
		return (0);

	va_start(pntr, n);
	for (i = 0; i < n; i++)
		tot_sum += va_arg(pntr, int);
	va_end(pntr);

	return (tot_sum);
}
