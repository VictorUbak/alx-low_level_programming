#include "main.h"
/**
* _strlen - Defends itself
* @s: strlen
* Return: length
*/
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len)
}
