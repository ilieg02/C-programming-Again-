/*
Name: Ilie Gabuja
Task Name: lab3-duplicated-number.c
*/
#include <stdio.h>
#include <stdlib.h>

void dupli(int length, int numbers[])
{
    int nr;
    int dups[length];
    int k = 0;
    for (int i = 0; i < length; i++)
    {
        nr = numbers[i];
        for (int j = 0; j < length; j++)
        {
            if (numbers[j] == nr && j != i)
            {
                int iner = 0;
                for (int b = 0; b < k; k++) /*looks for the number if it is already in the dulicates array*/
                {
                    if (dups[k] = numbers[j])
                    {
                        iner = 1;
                        break;
                    }
                }
                if (iner == 0)
                {
                    dups[k++] = numbers[j]; /*if it is not then we add it there*/
                }
            }
        }
    }
    if (k != 0)
    {
        for (int x = 0; x < k; x++)
        {
            printf("%d\n", dups[x]);
        }
    }
    else
    {
        printf("no duplicated number\n");
    }
}

int main(int argc, char *argv[])
{
    int numbers[argc - 1];
    for (int i = 0; i < argc - 1; i++)
    {
        numbers[i] = atoi(argv[i + 1]);
    }
    int length = argc - 1;
    dupli(length, numbers);
    return 0;
}