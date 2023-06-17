#include <stdio.h>
/**
* main - print the letter from reverse
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return 0;
}
