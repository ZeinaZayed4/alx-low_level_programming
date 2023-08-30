#include "main.h"
/**
 * _strlen_recursion - prints length of a string.
 * @s: string to get length.
 *
 * Return: int - length.
 */

int _strlen_recursion(char *s)
{
int x = 0;
if (*s > '\0')
{
x += _strlen_recursion(s + 1) + 1;
}
return (x);
}
