#include "main.h"
/**
 * print_line -  function that draws a straight line in the termina
 *
 * @n: variable type of integer
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(45);
		}
	}
	_putchar('\n');
}
