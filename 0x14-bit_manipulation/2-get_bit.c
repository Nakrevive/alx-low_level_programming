/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The zero-based index of the bit to extract
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is greater than or equal to the number of bits in n */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a mask with a 1 in the bit position corresponding to the index */
	unsigned long int mask = 1ul << index;

	/* Use the mask to extract the bit value at the given index */
	return ((n & mask) != 0);
}

