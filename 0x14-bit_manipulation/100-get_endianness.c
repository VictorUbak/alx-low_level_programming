#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0, 1
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *n = (char *) &l;

	return (*n);
}
