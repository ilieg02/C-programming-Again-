/*
Program: lab4-search-sub-string.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void findword(int length, char second[], char first[], int length2)
{
    int i = 0;
    while (i < length)
    {
        int j = i;
        while (j < length && *(first + j) != ' ') // while a space is found
        {
            j++;
        }
        if (j - i == length2)
        {
            char ok[length2]; // new string create
            int k = 0;
            while (k < length2) {
                ok[k] = first[i + k];
                k++;
            }
            ok[length2] = '\0'; // terminate our new string
            if (strcmp(ok, second) == 0) // compare our new string with argv[2]
            {
                printf("%d %d\n", i, j - 1);
            }
        }
        i = j + 1; // skip the space
    }
}

int main(int argc, char *argv[])
{
    char first[50];
    strcpy(first, argv[1]);
    int length = strlen(first);
    char second[50];
    strcpy(second, argv[2]);
    int length2 = strlen(second);
    findword(length, second, first, length2);
    return 0;
}