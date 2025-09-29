/*
lab2-draw-empty-square.c
author Ilie Gabuja
Function: Main
parameters: int argc (argument count)
char *argv[] an array of command-line arguments
description:  Takes a single argument and draws an empty square
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int width = atoi(argv[1]);
    char ok[1] = "*";
    int i = 0;
    for (i; i < width; i++)
    {
        printf("*");
    }
    printf("\n");

    int u = 0;
    for (int j = 0; j < width - 2; j++)
    {
        printf("*");
        for (int k = 0; k < width - 2; k++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    /*need to mention here that if we assign the index outside the loop the next iteration it will not be incremented*/
    /*for both loops!*/
    int p = 0;
    for (p; p < width; p++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}