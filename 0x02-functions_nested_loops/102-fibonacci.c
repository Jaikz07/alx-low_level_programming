#include <stdio.h>
/**
 *main - prints fibonacci sequence of numbers.
 *Return: 0.
 */
int main(void)
{
int i, n = 50; 
unsigned long long t1 = 1, t2 = 2, j;
printf("%llu, %llu, ", t1, t2);
for (i = 3; i <= n; i++)
{
	j = t1 + t2;
	t1 = t2;
	t2 = j;
	if (i != n)
	{
		printf("%llu, ", j);
	}
	else
	{
		printf("%llu\n", j);
	}
}
return (0);
}
