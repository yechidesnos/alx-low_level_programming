#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    char alph;
    for (alph = 'a' ; alph <= 'z' ; alph++)
    {putchar (alph);
    }
    for (alph = 'A' ; alph <= 'Z' ; alph++)
    {putchar (alph);
    }putchar ('\n');
    return (0);
}