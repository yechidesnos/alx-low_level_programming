#include <stdio.h>

/**
 * _strlen - returns the  string length
 * @s: char input
 * return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, som = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		som++;
		pl = s[i++];
	}
	return (som);
}
