#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int start_printing = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			start_printing = 1;
			putchar('1');
		}
		else if (start_printing == 1 || mask == 1)
			putchar('0');
		mask >>= 1;
	}
}


