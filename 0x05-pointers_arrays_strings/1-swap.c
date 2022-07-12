#include <stdio.h>

/*
 * swap_int - the function who permute two integer 
 * @a - first parameter
 * @b - second parameter
 * return: the permute number that you are write.
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
