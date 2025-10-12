/*Program: lab5-sort-numbers.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desc(int li[], int length) // selection sort (O(n^2))
{
    int i = 0;
    while (i < length)
    {
        int p = i;
        int j = p + 1;
        while (j < length)
        {
            if (*(li + j) > *(li + p))
            {
                p = j;
            }
            j++;
        }
        int temp = *(li + p);
        *(li + p) = *(li + i);
        *(li + i) = temp;
        i++;
    }
    printf("Sorted numbers: ");
    for (int i = 0; i < length; i++)
    {
        if (i != length - 1)
        {
            printf("%d ", *(li + i));
        }
        else
        {
            printf("%d", *(li + i));
        }
    }
    printf("\n");
}
void asc(int li[], int length)
{
    int i = 0;
    while (i < length)
    {
        int p = i;
        int j = p + 1;
        while (j < length)
        {
            if (*(li + j) < *(li + p))
            {
                p = j;
            }
            j++;
        }
        int temp = *(li + p);
        *(li + p) = *(li + i);
        *(li + i) = temp;
        i++;
    }
    printf("Sorted numbers: ");
    for (int i = 0; i < length; i++)
    {
        if (i != length - 1)
        {
            printf("%d ", *(li + i));
        }
        else
        {
            printf("%d", *(li + i));
        }
    }
    printf("\n");
}
int main(int argc, char *argv[])
{
    int length = atoi(argv[1]);
    int li[length];
    for (int i = 0; i < length; i++)
    {
        li[i] = atoi(argv[i + 2]);
    }
    if (strcmp(argv[argc - 1], "asc") == 0)
    {
        asc(li, length);
    }
    else if (strcmp(argv[argc - 1], "desc") == 0)
    {
        desc(li, length);
    }
    return 0;
}