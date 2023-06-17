#include <stdio.h>
/**
* main - printing only possible digits
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
