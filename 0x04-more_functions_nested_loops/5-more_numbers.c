#include "main.h"
/**
 *more_numbers - prints 10 time a number uptill 14
 * Return: multiple of 10
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
