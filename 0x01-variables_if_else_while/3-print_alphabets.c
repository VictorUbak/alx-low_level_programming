#include <stdio.h>
/**
 *main - entry point
 *Description: 'print alphabet'
 *Return: 0
 */
	int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');

	return (0);

}