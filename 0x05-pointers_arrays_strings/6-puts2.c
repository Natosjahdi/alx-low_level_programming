#include <stdio.h>
#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a strg
 * @str: string
 * Return: Nothing
 */

void puts2(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		if (j % 2 == 0)
		{
			putchar(*(str + j));
		}
		j++;
	}
	putchar(10);
}
