#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%s%s", (str = va_arg(arg, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
