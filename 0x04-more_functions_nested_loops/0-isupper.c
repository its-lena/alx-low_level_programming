#include "main.h"
/**
 * _isupper - check uppercase
 * @c: char checked
 * Return: 1 for uppercase 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
