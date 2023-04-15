#include "main.h"
/**
 * factorial - prints number factorial
 * @n: input
 * Return: result
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
