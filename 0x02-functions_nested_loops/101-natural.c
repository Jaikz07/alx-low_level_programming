#include <stdio.h>
/**
 * main - prints multiples of 3 and 5.
 * Return: 0.
 */
int main(void)
{
	int j;
	int sum;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
