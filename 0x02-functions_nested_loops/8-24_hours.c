#include "main.h"

/**
* jack_bauer - print every minute of a days
* Description: print minutes 00:00 to 23:59
*/

void jack_bauer(void)
{
int hours, min;
int not = 0;

for (hours = 0; hours < 24; hours++)
{
for (min = 0; min < 60; min++)
{
if (hours < 10)
{
_putchar('0' + not);
_putchar('0' + hours);
}
else
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
}
_putchar(':');
if (min < 10)
{
_putchar('0' + not);
_putchar('0' + min);
}
else
{
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
}
_putchar('\n');
}
}
}
