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
int n = 48;

while (n <= 57)
{
int m = 48;

while (m <= 57)
{
int r = 48;

while (r <= 57)
{
putchar(c);
putchar(n);
putchar(' ');
putchar(m);
putchar(r);

if (c != 57 || n != 56 || m != 57 || r != 57)
{
putchar(',');
putchar(' ');
}
r++;
}
m++;
}
n++;
}
c++;
putchar('\n');
}
return (0);
}
