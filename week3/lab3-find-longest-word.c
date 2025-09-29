/*
Name: Ilie Gabuja
Task Name: lab3-find-longest-word.c
Functions: main, longest.
*/
#include <stdio.h>
#include <string.h>

void longest(int length, char stringer[length])
{
    int i = 0;
    int start = 0;
    int end = 0;
    int lenger = 0;

    while (i < length)
    {
        while (i < length && stringer[i] == ' ')
            i++;

        int j = i;
        while (j < length && stringer[j] != ' ')
            j++;

        if (j - i > lenger)
        {
            lenger = j - i;
            start = i;
            end = j;
        }

        i = j;
    }

    for (int k = start; k < end; k++)
    {
        printf("%c", stringer[k]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    char stringer[50];
    strcpy(stringer, argv[1]);
    int length = strlen(stringer);
    longest(length, stringer);
    return 0;
}
