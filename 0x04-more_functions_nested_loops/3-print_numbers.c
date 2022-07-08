
#include "main.h"

/**
 * print_numbers - une fonction qui affiche les nombres de 0 à 9 avec putchar
 *
 * Return: 0-9 suivi d'une nouvelle ligne
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
