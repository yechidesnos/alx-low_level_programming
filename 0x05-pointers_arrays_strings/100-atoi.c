#include <stdio.h>

/**
 * _atoi - transtype function
 * @s: param
 * return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int num;

	num = atoi(*s);
	printf("%d",num);
	return (0);
}
