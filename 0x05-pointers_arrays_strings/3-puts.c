#include "main.h"
/**
 * _puts - Do not fear computers
 * @str: Fear not
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
