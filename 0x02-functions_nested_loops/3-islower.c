#include "main.h"
/**
* islower - Prints the alphabet lower case times.
* @n: Number to pass to _islower function
* description:
* Write a function that prints 10 times the alphab.
*
* Return: Always 0 (success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
