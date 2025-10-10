/*Program: lab5-sort-numbers.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void asc(int *li[], int length);
void desc(int *li[], int length);

int main(int argc, char *argv[])
{
    int length = atoi(argv[1]);
    int li[length]; // declare a pointer to an array of length numbers
    int sort[length];
    char *which = argv[7];
    for (int i = 0; i < length; i++)
    {
        li[i] = atoi(argv[i + 2]);
    }
    void (*pf)(int[], int);
    if (strcmp(which, "asc") == 0)
    {
        pf = asc;
    }
    else
    {
        pf = desc;
    }
}