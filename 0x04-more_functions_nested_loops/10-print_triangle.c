#include "main.h"

/**
 * print_triangle - une fonction qui affiche un triangle
 * @dim: dimension
 * Return: triangle formé de '#'
 */
void print_triangle(int dim)
{
	int i, j, k;

	if (dim <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= (dim - 1); j++)
		{
			for (i = 0; i < (dim - 1) - j; i++)
			{
				_putchar(' ');
			}
			for (k = 0; k<= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
