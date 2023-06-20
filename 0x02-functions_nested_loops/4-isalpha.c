#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: takes input from other functions
 *
 * Return: 1 is c if true else 0
*/
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
