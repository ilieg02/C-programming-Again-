/*Program: lab7-second-largest.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

float selectionsort(float *pnumbers, int length);
int main(int argc, char *argv[])
{
    float *pnumbers = NULL;
    int length = argc - 1;
    pnumbers = (float *)malloc((argc - 1) * sizeof(float));
    for (int i = 0; i < length; i++)
    {
        *(pnumbers + i) = atof(argv[1 + i]);
    }
    selectionsort(pnumbers, length);
    free(pnumbers);
    pnumbers = NULL;
    return 0;
}

float selectionsort(float *pnumbers, int length)
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
        float temp = *(pnumbers + p);
        *(pnumbers + p) = *(pnumbers + i);
        *(pnumbers + i) = temp;
        i++;
    }
    float secondlg = *pnumbers;
    int k = 0;
    while (*(pnumbers + k) == secondlg)
    {
        k++;
    }
    secondlg = *(pnumbers + k);
    printf("%.1f\n", secondlg);
}
