#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *file = fopen("data2.txt", "w+");
    fprintf(file, "Ilie\n");
    fprintf(file, "DCU\n");
    fprintf(file, "19\n");
    fprintf(file, "1:1\n");
    char line[50];
    int i = 0;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s\n", line);
        i++;
    }
    file = NULL;
    fclose(file);
    return 0;
}