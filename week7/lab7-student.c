/*Program: lab7-student.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int length = argc - 1;
    char *pnames;
    pnames = (char *)malloc(((length / 3) * (sizeof(float))) + ((length / 2) * 20));
    for (int i = 1; i < length + 1; i += 3)
    {
        printf("%s, %s, %.2f\n", argv[i], argv[i + 1], atof(argv[i + 2]));
    }
    free(pnames);
    return 0;
}