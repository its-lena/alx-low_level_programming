#include "main.h"
/**
 * _strlen_recursion -  prints the length
 * @s : input
 * Return : returns the length
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
