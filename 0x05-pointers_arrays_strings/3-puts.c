#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: Prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		putchar(*(str + j));
		j++;
	}
	putchar(10);
}
