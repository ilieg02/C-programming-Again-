/*
lab2-find-even-number.c
author Ilie Gabuja
Function: Main
parameters: int argc (argument count)
char *argv[] all even elements in an array of integers.
description: all even elements in an array of integers then print them.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int evens[argc - 1];
    for (int i = 0; i < argc - 1; i++)
    {
        evens[i] = atoi(argv[i + 1]);
    }
    int ok = 0;
    int k = 0;
    while (evens[k] % 2 != 0)
    {
        ok++;
        k++;
    }
    if (ok != argc - 1)
    {
        for (int j = 0; j < argc - 1; j++)
        {
            if (evens[j] % 2 == 0)
            {
                printf("%d - %d\n", j, evens[j]);
            }
        }
    }
    else
    {
        printf("Not found!\n");
        return 0;
    }
    return 0;
}