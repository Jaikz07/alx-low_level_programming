#include <stdio.h>
/**
 * main - This is a program that print all letters of alphabet with exception.
 * Return: 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'q' && letter != 'e')
{
	putchar(letter);
}
}
putchar('\n');
return (0);
}
