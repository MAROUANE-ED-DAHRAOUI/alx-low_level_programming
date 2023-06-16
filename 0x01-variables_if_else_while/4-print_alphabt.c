#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char rf = 'f';
	char df = 'r';

	while (ch <= 'd')
	{
		putchar(ch);
		ch++;
	}
	while (rf <= 'p')
	{
		putchar(rf);
		rf++;
	}
	while (df <= 'z')
	{
		putchar(df);
		df++;
	}
	putchar('\n');

	return (0);
}
