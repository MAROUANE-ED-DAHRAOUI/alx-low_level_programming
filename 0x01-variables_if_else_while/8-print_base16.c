#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char ch = 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
