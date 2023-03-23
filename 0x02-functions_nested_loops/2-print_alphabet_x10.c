#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alpha
 */
void print_alphabet_x10(void)
{
int num;
for (num = 0; num < 10; num++)
{
char c;
for (c = 'a'; c <= 'z' ; c++)
	putchar(c);
putchar('\n');
}
}
