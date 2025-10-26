/*Program: lab7-dot-product-two-vector.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

int dotproduct(int *pnumbers, int length);

int main(int argc, char *argv[])
{
    int *pnumbers = NULL;
    int length = argc - 2;
    pnumbers = (int *)malloc((length) * (sizeof(int)));
    for (int i = 0; i < length; i++)
    {
        *(pnumbers + i) = atoi(argv[i + 2]);
    }
    printf("%d\n", dotproduct(pnumbers, length));
    free(pnumbers);
    pnumbers = NULL;
    return 0;
}

int dotproduct(int *pnumbers, int length)
{
    int tot = 0;
    for (int i = 0; i < length / 2; i++)
    {
        tot += (*(pnumbers + i) * *(pnumbers + i + (length / 2)));
    }
    return tot;
}