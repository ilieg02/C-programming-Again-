/*
Name: Ilie Gabuja
Task Name: lab3-findMax.c
Functions: main, maxer.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maxer(int ok, int ano[ok - 1])
{
    int max2 = ano[0];
    for (int i = 1; i < ok; i++)
    {
        if (ano[i] > max2)
        {
            max2 = ano[i];
        }
    }
    printf("%d\n", max2);
}

int main(int argc, char *argv[])
{
    int ok = argc - 1;
    int ano[ok];
    for (int i = 0; i < ok; i++)
    {
        ano[i] = atoi(argv[i + 1]);
    }
    maxer(ok, ano);
    return 0;
}