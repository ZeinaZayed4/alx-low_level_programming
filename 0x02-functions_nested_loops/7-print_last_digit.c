#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: get the last digit from
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
int x;

if (n == INT_MIN)
{
x = 8;
_putchar('0' + x);
return (x);
}

if (n < 0)
{
n = -n;
}

x = n % 10;
_putchar('0' + x);
return (x);
}
