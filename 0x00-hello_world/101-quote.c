#include <stdio.h>
#include <unistd.h>
/**
 * main - A C program that prints a line to the standard error
 * Return: 1 (Success)
 */
int main()
{
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t bytes_written = write(2, message, 51);
    if (bytes_written != 51) {
        return 1;
    }
    return 1;
}
