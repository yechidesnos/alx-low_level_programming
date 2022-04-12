#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main block
*Description:	prints all possible combinations of single-digit numbers..
*Return: (0) that's great.
*/
int main(void)
{
	int i;

	for (i=0 ; i<10 ; i++)
    {
        putchar(i + '0'); 
        putchar(','); 
        putchar('\t'); 
    }
    putchar('\n'); 
    return (0);
}
