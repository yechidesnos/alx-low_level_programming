#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main block
*Description:	print single digit from 0 to 10 with putchar.
*Return: (0) that's great.
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
    {
        putchar(i + '0'); 
    }
    putchar('\n'); 
    return (0); 
}
