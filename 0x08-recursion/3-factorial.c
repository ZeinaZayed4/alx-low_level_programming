#include "main.h"
/**
 * factorial - return the factorial of a given number.
 * @n: number to get its factorial.
 *
 * Return: -1 if n is negative, 1 if n is 0 or 1
 * otherwise the calculated factorial.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (1);
else
return (n * factorial(n - 1));
}
