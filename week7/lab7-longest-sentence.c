/*Program: lab7-longest-sentence.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int length = argc - 1;
    char *lg = argv[1];
    for (int i = 1; i < length; i++)
    {
        if (strlen(argv[i]) > strlen(lg))
        {
            lg = argv[i];
        }
    }
    for (int j = 1; j < length + 1; j++)
    {
        if (strlen(argv[j]) == strlen(lg))
        {
            printf("%s\n", argv[j]);
        }
    }
    return 0;
}