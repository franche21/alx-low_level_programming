#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(h)
{
    char str[] = "_putchar\n";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        write(1, &str[i], 1);
    }

    return (0);
}
