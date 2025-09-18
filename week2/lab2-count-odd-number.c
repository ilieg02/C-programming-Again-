/*
lab2-count-odd-number.c
author Ilie Gabuja
Function: Main
parameters: int argc (argument count)
char *argv[] an array of array of integers
description:  count the number of odd numbers in an array of integers.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k = 0;
    int odds[argc - 1];
    /*new list for the odds then dont forget that argc is always - 1 because of the file name!*/
    for (int j = 0; j < argc - 1; j++)
    {
        odds[j] = atoi(argv[j + 1]);
        if (odds[j] % 2 != 0)
        {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}