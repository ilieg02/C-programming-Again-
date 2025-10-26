/*Program: lab7-largest-twice.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

void findlg(int *pnumbers, int length);

int main(int argc, char *argv[])
{
    int *pnumbers = NULL;
    int length = argc - 1;
    pnumbers = (int *)malloc(length * (sizeof(int)));
    for (int i = 0; i < length; i++)
    {
        *(pnumbers + i) = atoi(argv[i + 1]);
    }
    findlg(pnumbers, length);
    free(pnumbers);
    pnumbers = NULL;
    return 0;
}

void findlg(int *pnumbers, int length)
{
    int i = 0;
    while (i < length)
    {
        int p = i;
        int j = p + 1;
        while (j < length)
        {
            if (*(pnumbers + j) > *(pnumbers + p))
            {
                p = j;
            }
            j++;
        }
        int temp = *(pnumbers + p);
        *(pnumbers + p) = *(pnumbers + i);
        *(pnumbers + i) = temp;
        i++;
    }
    int lig = pnumbers[0];
    int h = 0;
    int ok = 0;
    while (h < length)
    {
        if (*(pnumbers + h) * 2 <= lig)
        {
            ok += 1;
        }
        h++;
    }
    if (ok > 0)
    {
        printf("%d\n", lig);
    }
    else
    {
        printf("0\n");
    }
}