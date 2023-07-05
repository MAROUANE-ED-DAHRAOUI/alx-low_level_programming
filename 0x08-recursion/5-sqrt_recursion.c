#include "main.h"
/**
 * recursion_sqrt - function that return value the square root the number
 *
 * @n: this is Number
 * @i: Number type integer
 *
 * Return: Value n or - 1
*/
int recursion_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
		return (recursion_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion -  function that returns the natural
 * square root of a number
 *
 * @n: variable from type integer
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (recursion_sqrt(n, 0));
}
