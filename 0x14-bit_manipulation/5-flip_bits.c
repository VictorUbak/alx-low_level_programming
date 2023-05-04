#include "main.h"

/**
 * flip_bits - return the number of Bit needed
 * @n: flip Bit
 * @m: from one number to another
 * Return: changed number of Bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int lead;
	unsigned long int spec = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		lead = spec >> a;
		if (lead & 1)
			count++;
	}

	return (count);
}
