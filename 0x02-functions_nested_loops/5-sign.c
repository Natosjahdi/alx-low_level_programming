#include "main.h"
/**
* print_sign - Prints the alphabet 10 times.
* @n: - character
* description:
* Write a function that prints 10 times the alphab.
*
* Return: Always 0 (success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
