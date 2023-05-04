#include "main.h"

/**
 * print_binary - converts a dec. to binary
 * and print it
 * @n: convertd dec. number to be printed
 * Return: 0 always.
 */

void print_binary(unsigned long int n)
{
unsigned int i;
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int significant_bits = 0;
/* Special case for zero input */
if (n == 0)
{
_putchar('0');
return;
}

/* Find the position of the leftmost significant bit */
for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((n & mask) != 0)
{
significant_bits = i;
break;
}
mask >>= 1;
}

/*Print the binary representation*/
for (i = significant_bits; i < sizeof(unsigned long int) * 8; i++)
{
_putchar(n & mask ? '1' : '0');
mask >>= 1;
}
}
