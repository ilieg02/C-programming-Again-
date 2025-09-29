/*
Name: Ilie Gabuja
Task Name: lab3-search-number.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findnr(int ok, int lines[ok], int firstnr)
{
    int wheres[50];
    int i = 2;
    int j = 0;
    while (i < ok)
    {
        if (lines[i] == firstnr)
        {
            wheres[j] = i;
            j++;
        }
        i++;
    }
    if (j != 0)
    {
        printf("Found %d at ", firstnr);
        for (int i = 0; i < j; i++)
        {
            printf("%d", wheres[i]);
        }
        printf("\n");
    }
    else
    {
        printf("%d not found\n", firstnr);
    }
}
/*prints out the search number and all the indeces it has been found!*/
int main(int argc, char *argv[])
{
    int lines[argc - 2];
    int ok = argc - 2;
    int firstnr = atoi(argv[1]);
    for (int i = 0; i < argc - 2; i++)
    {
        lines[i] = atoi(argv[i + 2]);
    }
    findnr(ok, lines, firstnr);
    return 0;
}