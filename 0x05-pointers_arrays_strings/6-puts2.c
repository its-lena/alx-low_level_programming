#include "main.h"
/**
 * puts2 - function should print only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longg = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longg++;
	}
	t = longg - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

