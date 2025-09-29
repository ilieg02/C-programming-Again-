/*
Name: Ilie Gabuja
Task Name: lab3-is-sorted.c
Functions: main, selectionsort.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void selectionsort(int length, int nrs[])
{
    int i = 0;
    while (i < length)
    {
        int p = i;
        int j = p + 1;
        while (j < length)
        {
            if (nrs[j] < nrs[p])
            {
                p = j;
            }
            j++;
        }
        int temp;
        temp = nrs[p];
        nrs[p] = nrs[i];
        nrs[i] = temp;
        i++;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", nrs[i]);
    }
}

int main(int argc, char *argv[])
{
    int length = argc - 1;
    int nrs[argc - 1];
    for (int i = 0; i < argc - 1; i++)
    {
        nrs[i] = atoi(argv[i + 1]);
    }
    selectionsort(length, nrs);
    return 0;
}