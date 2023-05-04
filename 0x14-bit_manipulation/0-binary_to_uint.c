#include "main.h"

/**
 * binary_to_uint - convert Binary
 * @b: Binary number
 *
 * Return: 0 or the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int dv = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		dv = 2 * dv + (b[n] - '0');
	}

	return (dv);
}
