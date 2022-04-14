#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*print_alphabet_x10-print_alphabet_x10 for 10 times.
*Return: (0) that's great.
*/
void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
		putchar('\n');
	}
}
