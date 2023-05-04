#include "main.h"

/**
 * print_binary - print Binary representation
 * @n: print Binary
 */
void print_binary(unsigned long int n)
{
	int z, count = 0;
	unsigned long int present;

	for (z = 63; z >= 0; z--)
	{
		present = n >> z;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
