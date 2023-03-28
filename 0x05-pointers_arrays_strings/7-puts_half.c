#include "main.h"
/**
 * puts_half - a function that prints half of the string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longg;

	longg = 0;

	for (a = 0; str[a] != '\0'; a++)
		longg++;

	n = (longg / 2);

	if ((longg % 2) == 1)
		n = ((longg + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

