#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _slower('H');
    _putchar(r + '0');
    r = _slower('o');
    _putchar(r + '0');
    r = _slower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
