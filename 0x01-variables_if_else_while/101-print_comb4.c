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
int m = n + 1;
while (m <= 57)
{
putchar(c);
putchar(n);
putchar(m);

if (c != 55 || n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
m++;
}
n++;
}
c++;
}

putchar('\n');

return (0);
}
