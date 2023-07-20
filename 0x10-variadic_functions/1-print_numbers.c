#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%d%s", va_arg(arg, int),
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
