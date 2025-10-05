/*
Program: lab4-multiple-matrix.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

void multiplicatenow(int n, int m, int m2, int matrixa[n][m], int matrixb[m][m2], int matrixc[n][m2])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            matrixc[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                matrixc[i][j] += matrixa[i][k] * matrixb[k][j];
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int lengthA = n * m;

    int matrixa[n][m];
    int i = 3;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            matrixa[row][col] = atoi(argv[i++]);
        }
    }

    int n2 = atoi(argv[i++]);
    int m2 = atoi(argv[i++]);

    int matrixb[n2][m2];
    for (int row = 0; row < n2; row++)
    {
        for (int col = 0; col < m2; col++)
        {
            matrixb[row][col] = atoi(argv[i++]);
        }
    }

    int matrixc[n][m2];
    multiplicatenow(n, m, m2, matrixa, matrixb, matrixc);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m2; col++)
        {
            if (col != m2 - 1)
            {
                printf("%d ", matrixc[row][col]);
            }
            else {
                printf("%d", matrixc[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}
