#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main block
*print_alphabet
@c: type void character
*Description:print_alphabet.
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

