#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - return the difference of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the product of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the remainder of division
 * @a: number 1
 * @b: number 2
 * Return: remainder of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returns value of number divisible without reaminder.
 * @a: number 1
 * @b: number 2
 * Return: values of a divisible by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
