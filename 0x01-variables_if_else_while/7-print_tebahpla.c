#include <stdio.h>
/**
* main - print the letter from reverse
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
