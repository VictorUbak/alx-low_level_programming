#include "main.h"
/**
 * _isalpha - is alpha
 * @c: c is alphabet
 * Return: 1 if c is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
