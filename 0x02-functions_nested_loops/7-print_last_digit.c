#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: Variable integer in function
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int R;

	if (n < 0)
	{
		R = -1 * (n % 10);
	}
	else
	{
		R = n % 10;
	}

	_putchar(R + '0');
	return (R);
}
