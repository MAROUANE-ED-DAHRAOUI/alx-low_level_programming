#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shet = sizeof(n) * 8, pri = 0;

	while (shet)
	{
		if (n & 1L << --shet)
		{
			_putchar('1');
			pri++;
		}
		else if (pri)
			_putchar('0');
	}
	if (!pri)
		_putchar('0');
}
