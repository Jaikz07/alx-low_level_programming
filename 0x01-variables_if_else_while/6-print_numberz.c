#include <stdio.h>
/**
 * main - This program prints numbers without variable use.
 * Return: 0 (success)
 */
int main(void)
{
int j;
for (j = 0; j <= 9; j++)
{
	putchar('0' + j);
}
putchar('\n');
return (0);
}
