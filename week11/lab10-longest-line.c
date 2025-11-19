/*
Name: Ilie Gabuja
Task name: lab10-longest-line.c
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *pfile = NULL;
    char *filename = "paragraph.txt";
    pfile = fopen(filename, "r");
    char line[200];
    char longest[200] = "";
    int maxLen = 0;

    while (fgets(line, 200, pfile) != NULL)
    {
        int len = 0;
        while (line[len] != '\0' && line[len] != '\n')
            len++;
        if (len > maxLen)
        {
            maxLen = len;
            for (int i = 0; i <= len; i++)
                longest[i] = line[i];
        }
    }

    fclose(pfile);

    printf("%d\n", maxLen + 1);
    printf("%s\n", longest);

    return 0;
}
