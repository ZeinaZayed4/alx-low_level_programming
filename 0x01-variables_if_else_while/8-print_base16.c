#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char x = '0', c = 'a';

while (x <= '9')
{
putchar((int)x);
x++;
}

while (c <= 'f')
{
putchar(c);
c++;
}

putchar('\n');

return (0);
}
