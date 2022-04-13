#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*print_alphabet-print_alphabet a to z.
*Return: (0) that's great.
*/
void print_alphabet(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
