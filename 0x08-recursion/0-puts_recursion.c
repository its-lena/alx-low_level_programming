#include "main.h"
/**
 * _puts_recursion - prints a sentence
 * @s : character to be printed
 * Return : always 0
 */
void _puts_recursion(char *s)
{
if (*S)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
