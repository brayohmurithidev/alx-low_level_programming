#include "main.h"

/**
 * main -program to print _putchar followed by new line
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char text[9] = "_putchar";

	for (a = 0; 0 < 8; a++)
	{
		_putchar(text[a]);
	}
	_putchar('\n');
	return (0);
}
