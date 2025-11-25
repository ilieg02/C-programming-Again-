#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *file = fopen("myname.txt", "w");
    char *name;
    strcpy(name, argv[1]);
    fputs(name, file);
    fclose(file);
    file = NULL;
    return 0;
}