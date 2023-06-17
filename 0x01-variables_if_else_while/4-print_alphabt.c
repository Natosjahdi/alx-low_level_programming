#include <stdio.h>
/**
* main - print the letter and != some letters
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{ 
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
