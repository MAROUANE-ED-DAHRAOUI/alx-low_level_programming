#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum variable arguments
 * @n: the number of arguments
 * @...: the integer Sum
 *
 * Return: Sum the integer
*/
int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0, i = n;

	va_list arg;

	if (!n)
		return (0);
	va_start(arg, n);
	while (i--)
		Sum += va_arg(arg, int);
	va_end(arg);
	return (Sum);
}
