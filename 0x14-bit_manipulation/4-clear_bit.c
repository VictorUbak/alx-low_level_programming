#include "main.h"

/**
 * clear_bit - clear Bit
 * @n: value of a Bit sets to 0
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
		return (1);
}
