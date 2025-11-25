#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // open a file and write numbers from the command line
    FILE *file = fopen("numbers.txt", "w");
    int numbers[argc - 1];
    for (int i = 0; i < argc - 1; i++)
    {
        *(numbers + i) = atoi(argv[i + 1]);
    }
    for (int j = 0; j < argc - 1; j++)
    {
        fprintf(file, "%d\n", *(numbers + j));
    }
    char line[256]; // buffer to hold each line
    int i = 0;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%d\n", i, line);
        i++;
    }
    fclose(file);
    return 0;
}