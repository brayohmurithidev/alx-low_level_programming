#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: variable
 * Return: return s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + 1))
		i++;
	return (i);
}
