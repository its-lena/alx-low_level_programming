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
printf("Size of a char: %d byte(s)\n", sizeof(b));
printf("Size of a int: %d byte(s)\n", sizeof(x));
printf("Size of a long int: %d byte(s)\n", sizeof(y));
printf("Size of a long long int: %d byte(s)\n", sizeof(z));
printf("Size of a float: %d byte(s)\n", sizeof(a));
return (0);
}
