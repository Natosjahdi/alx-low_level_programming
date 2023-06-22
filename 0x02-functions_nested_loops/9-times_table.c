#include "main.h"
/**
*  times_table - value of an integer.
*
* Return: The absolute value of n.
*/
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++) {
for (j = 0; j <= 9; j++) {
result = i * j;
if (result <= 9) {
_putchar(result + '0');
} else {
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar(' ');
}
_putchar('\n');
}
}
