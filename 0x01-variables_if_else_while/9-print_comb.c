#include <stdio.h>
/**
 * main - this program entails number combination.
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 9)
	putchar(i + '0');
else
{
	putchar('0' + i);
	putchar(',');
	putchar(' ');
}
}
return (0);
}

