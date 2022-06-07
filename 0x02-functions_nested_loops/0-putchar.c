#include <main.h>
#include <stdio.h>

/**
 * main -program to print _putchar followed by new line
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char str_hbt[9] = "Holberton";

	while (a < 9)
	{
		_putchar(str_hbt[a]);
		a += 1;
	}
	_putchar('\n');
	return (0);
}
