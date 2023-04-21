#include <stdio.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number to modify
 * @index: The zero-based index of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is greater than or equal to the number of bits in n */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a mask with a 1 in the bit position corresponding to the index */
	unsigned long int mask = 1ul << index;

	/* Use the mask to set the bit value at the given index to 1 */
	*n |= mask;

	return (1);
}

