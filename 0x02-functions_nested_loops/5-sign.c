#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 *
 */

int print_sign(int n)
{
int i;
if (n > 0)
{
_putchar('+');
i =1;
}
else if (n < 0)
{
_putchar('-');
i = -1;
}
else
{
_putchar('0');
i =0;
}
return (i);
}
