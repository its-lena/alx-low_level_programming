#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longg = 0;
	int o;

	while (*s != '\0')
	{
		longg++;
		s++;
	}
	s--;
	for (o = longg; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

