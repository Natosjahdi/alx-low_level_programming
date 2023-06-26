#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int j, tmp, len = _strlen(s);

	for (j = 0; j < len / 2; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + len - j - 1);
		*(s + len - j - 1) = tmp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
