#include "main.h"
/**
 * print_line -  function that draws a straight line in the termina
 *
 * @n: variable type of integer
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(45);
			n--;
		}
	}
	_putchar('\n');
}
