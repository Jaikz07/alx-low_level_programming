#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercases in multiples of 10.
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
int j;
char k;
for (j = 1; j <= 10; j++)
{
for (k = 'a'; k <= 'z'; k++)
	_putchar(k);
_putchar('\n');
}
}
