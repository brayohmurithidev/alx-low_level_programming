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

	while (text != '\0')
	{
		if (text < '0' || text > '9')
		return (0);
		text++;
	}
	return (1);
	_putchar('\n');
}
