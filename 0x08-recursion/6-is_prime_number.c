#include "main.h"
/**
 * Prime_number - this is function check prime number
 *
 * @n: this is number integer
 * @i: this is number integer
 *
 * Return: 1 or 0
*/
int Prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (Prime_number(n, i - 1));
}
/**
 * is_prime_number - function that returns 1 if the
 * input integer is prime number
 *
 * @n: this is number type integer
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	else
		return (Prime_number(n, n - 1));
}
