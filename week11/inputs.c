#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *file = fopen("outputintegers.txt", "r+");
    char line[10];
    char *length = fgets(line, sizeof(line), file);
    int length2 = atoi(length);
    int i = 0;
    int sume = 0;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        sume += atoi(line);
        i++;
    }
    fclose(file);
    FILE *file2 = fopen("inputintegers.txt", "w");
    fprintf(file2, "%d", sume);
    return 0;
}
