#include <stdio.h>
/**
* main - print the letter and != some letters
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
