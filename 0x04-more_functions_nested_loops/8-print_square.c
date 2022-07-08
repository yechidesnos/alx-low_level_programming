#include "main.h"

/**
 * print_square - une fonction qui affiche un carré
 * @dim: dimension
 * Return: un care de '#'
 */
void print_square(int dim)
{
	int i, j;

	if (dim<= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= dim; i++)
		{
			_putchar('#');
			for (j = 2; j <= dim; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
