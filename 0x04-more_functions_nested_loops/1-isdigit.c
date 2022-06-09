#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: variable
 * return 1 if digit else
 * Return: 0
 */

int _isdigit(int c)
{
	char text = 'c';

	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == 0)
		return (0);
	}
	return (1);
	_putchar('\n');
}
