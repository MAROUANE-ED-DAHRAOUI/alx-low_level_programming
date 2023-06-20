#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: Variable integer
 *
 * Return: 1 if n is greated than zero else if 0 n is zero
 * else if -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
