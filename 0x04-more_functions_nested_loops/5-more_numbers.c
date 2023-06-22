#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
*/
void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar('0' + (k / 10));
			}
			_putchar('0' + (k % 10));
		}
		_putchar('\n');
	}
}
