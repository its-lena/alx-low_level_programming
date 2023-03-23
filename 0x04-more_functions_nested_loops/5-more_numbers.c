#include "main.h"
/**
 * more_numbers - prints many numbers
 */
void more_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
int j;
for (j = 0; j <= 14; j++)
{
	if (i >= 10)
	_putchar('1');
	_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
