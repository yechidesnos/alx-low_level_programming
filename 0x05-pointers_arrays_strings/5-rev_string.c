#include <main.h>

/**
 * rev_string - a function that reverse a string
 * @s: parameter who take the word that revere
 * return: the reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int cont= 0;
	int i;

	while (s[cont] != '\0')
		cont++;

	for (i = 0; i < cont; i++)
	{
		cont--;
		rev = s[i];
		s[i] = s[cont];
		s[cont] = rev;
	}
}
