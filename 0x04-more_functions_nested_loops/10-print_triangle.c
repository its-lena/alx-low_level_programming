#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
int i, j, z;
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
_putchar(32);
for (z = 0; z <= i ; z++)
_putchar('#');
_putchar('\n');
}
}
