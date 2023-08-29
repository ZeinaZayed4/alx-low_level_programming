#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
int n = 0;

while (n < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
n++;
_putchar('\n');
}
}
