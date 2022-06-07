#include "main.h"

/**
 * main -program to print _putchar followed by new line
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char str_hbt[9] = "_putchar";

	for (a = 0; 0 < 8; a++)
	{
		_putchar(str_hbt[a]);
	}
	_putchar('\n');
	return (0);
}
