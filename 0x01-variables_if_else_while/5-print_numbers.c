#include <stdio.h>
/**
 * main - this program prints numbers in base 10 starting with 0.
 * Return: 0 (success)
 */
int main(void)
{
int j;
for (j = 0; j < 10; j++)
{
	putchar('0' + j);
}
putchar('\n');
return (0);
}
