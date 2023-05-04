#include "main.h"

/**
 * get_bit - return a Bit value at a given index
 * @n: get Bit
 * @index: Bit at a given index
 * Return: -1 or value of Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bat;

	if (i > 63)
		return (-1);

	bat = (n >> i) & 1;

	return (bat);
}
