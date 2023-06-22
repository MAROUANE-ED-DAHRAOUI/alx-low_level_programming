#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers,
 * do not print 2and 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
