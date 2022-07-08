#include "main.h"

/**
 * more_numbers - une fonction qui affiche 10 chiffres entre 0 et 14
 * _putchar avec sueulement 3 putchar
 * Return: 0-14 dix fois 
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
