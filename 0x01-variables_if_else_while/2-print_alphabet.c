#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
