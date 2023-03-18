#include<stdio.h>
/**
 * main -  print alpha
 * Return: 0 (success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	if (!(c == 'q' || c == 'e'))
		putchar(c);
}
putchar('\n');
return (0);
}
