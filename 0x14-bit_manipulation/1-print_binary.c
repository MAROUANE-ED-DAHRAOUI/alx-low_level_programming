#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int Shit  = sizeof(n) * 8, print = 0;

	while (Shit)
	{
		if (n & 1L << --Shit)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
