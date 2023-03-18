#include<stdio.h>
/**
 * main - hexa num
 * Return: 0 (success)
 */
int main(void)
{
char c;
for (c = 48; c <= 57; c++)
	putchar(c);
for (c = 'a'; c <= 'f'; c++)
	putchar(c);
putchar('\n');
return (0);
}
