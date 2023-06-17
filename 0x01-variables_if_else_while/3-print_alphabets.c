#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
char alphabet, uppercase;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
