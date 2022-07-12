#include <stdio>

/**
 * print_rev - a function that prints a string, in reverse
 * cont is to first count to end, n is to count back
 * @s: str input
 * return: string in reverse
 */
void print_rev(char *s)
{
	int cont = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		cont++;
	}

	for (n = (cont - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
