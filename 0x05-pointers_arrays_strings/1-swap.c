#include "main.h"
/**
* swap_int - Don't swap horses in crossing a stream
* @a: swap a
* @b: swap b
*/
void swap_int(int *a, int *b)
{
int h;

h = *a;
*a = *b;
*b = h;
}
