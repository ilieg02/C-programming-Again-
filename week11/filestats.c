#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen("sample.txt", "r");
    char line[256];
    int lines = 0;
    int chars = 0;
    int longest = 0;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (strlen(line) > longest)
        {
            longest = strlen(line);
        }
        chars += strlen(line);
        lines++;
    }
    printf("File Statistics:\n");
    printf("Total lines: %d\n", lines);
    printf("Total chars: %d\n", chars);
    printf("Longest line: %d\n", longest);
    fclose(file);
    return 0;
}