#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *file = fopen("myRec.txt", "w");
    int nr = atoi(argv[1]);
    fprintf(file, "*\n");
    for (int i = 0; i < nr; i++)
    {
        fprintf(file, "*");
        for (int j = 0; j < i; j++)
        {
            fprintf(file, " ");
        }
        fprintf(file, "*\n");
    }
    for (int k = 0; k < nr + 2; k++)
    {
        fprintf(file, "*");
    }
    fprintf(file, "\n");
    fclose(file);
    return 0;
}