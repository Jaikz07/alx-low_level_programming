#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints any value given to 98.
 * Return: always 0
 * @n: parameters.
 */
void print_to_98(int n)
{
int i;
if (n >= 0 && n <= 98)
{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
else if (n < 0)
{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
else if (n > 98)
{
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
else if (n == 0)

	printf("%d", n);
}
