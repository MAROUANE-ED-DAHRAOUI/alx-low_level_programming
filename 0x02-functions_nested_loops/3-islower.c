#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 *
 * Return: 1 if c is lowercase or returns 0 otherwise
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
