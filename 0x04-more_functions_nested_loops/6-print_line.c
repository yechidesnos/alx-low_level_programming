#include "main.h"

/**
 * print_line - une fonction qui trace une ligne
 * @n: le nombre de  '_'
 * Return: la ligne former de n
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
