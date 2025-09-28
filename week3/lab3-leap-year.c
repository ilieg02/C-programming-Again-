/*
Name: Ilie Gabuja
Task Name: lab3-leap-year.c
Functions: main, leaper.
*/
#include <stdio.h>
#include <stdlib.h>

void leaper(int nr1, int nr2)
{
    while (nr1 <= nr2)
    {
        if (nr1 % 400 == 0 || (nr1 % 4 == 0 & nr1 % 100 != 0))
        {
            printf("%d\n", nr1);
        }
        nr1++;
    }
}

int main(int argc, char *argv[])
{
    int nr1 = atoi(argv[1]);
    int nr2 = atoi(argv[2]);
    leaper(nr1, nr2);
    return 0;
}