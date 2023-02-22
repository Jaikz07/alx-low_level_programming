#include <stdio.h>
/**
 *main - prints fibonacci sequence of numbers.
 *Return: 0.
 */
int main(void)
{
int i, n = 50; 
int t1 = 1, t2 = 2, j;
printf("%d, %d, ", t1, t2);
for (i = 3; i <= n; i++)
{
	j = t1 + t2;
	t1 = t2;
	t2 = j;
	if (i != n)
	{
		printf("%d, ", j);
	}
	else
	{
		printf("%d\n", j);
	}
}
return (0);
}
