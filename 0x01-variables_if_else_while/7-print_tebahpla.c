#include <stdio.h>
/**
 * main - This is a programm that prints alphabets backwards in lower case.
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
	putchar(letter);
	letter--;
}
putchar('\n');
return (0);
}
