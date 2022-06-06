#include <stdio.h>

/**
 * main - Print base 16 numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int a = 252;
	int lower = 'a';

	while (a <= 261)
	{
		putchar(a);
		a += 1;
	}
	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
