#include "main.h"

/**
 * print_alphabet - program that prints the lowercase alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
