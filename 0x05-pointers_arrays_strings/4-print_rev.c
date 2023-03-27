#include "main.h"
/**
 * print_rev - I can only go one way
 * @s: print
 */
void print_rev(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
s--
while (len > 0)
{
s--;
len--;
}
_putchar('\n')
}
