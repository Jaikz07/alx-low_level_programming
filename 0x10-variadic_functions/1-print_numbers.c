#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function.
 * @...: variable number of numbers.
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;

va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(nums);
}
