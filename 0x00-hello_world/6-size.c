#include<stdio.h>
/**
 * main -  return size
 * Return: 0 (success)
 */
int main(void)
{
int x;
long int y;
long long int z;
float a;
char b;
printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a int: %lu 1 byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu 1 byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu 1 byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
