#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int c = 48;

while (c <= 57)
{
int n = c + 1;

while (n <= 57)
{
putchar(c);
putchar(n);

if (c != 56 || n != 57)
{
putchar(',');
putchar(' ');
}
n++;
}
c++;
}

putchar('\n');

return (0);
}
