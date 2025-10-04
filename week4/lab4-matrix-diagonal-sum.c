/*
Program: lab4-matrix-diagonal-sum.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getsum(int *ptt, int ok, int (*matrix)[ok])
{
    int i = 0;
    while (i < ok)
    {
        *ptt += *(*(matrix + i) + i);
        i++;
    }
}

int main(int argc, char *argv[])
{

    int ok = atoi(argv[1]); // ok * ok matrix
    int total = ok * ok;
    int matrix[ok][ok];

    for (int i = 0; i < total; i++)
    {
        matrix[i / ok][i % ok] = atoi(argv[i + 2]); // start from argv 2
    }
    int tt = 0; // initialize our count
    int *ptt = &tt; // get that pointer
    getsum(ptt, ok, matrix);
    printf("%d\n", *ptt);
    return 0;
}
