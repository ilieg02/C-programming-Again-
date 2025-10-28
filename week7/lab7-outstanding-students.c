/*Program: lab7-student.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int *length = NULL;
    length = (int *)malloc((argc - 1) * sizeof(int));
    *length = argc - 1;
    float *avg = NULL;
    avg = (float *)malloc(sizeof(float));
    for (int i = 3; i < (*length) + 1; i += 3)
    {
        *avg += atof(argv[i]);
    }
    *avg /= *length / 3;
    for (int i = 3; i < ((*length) + 1); i += 3)
    {
        if (strcmp(argv[i - 1], "CSCE") == 0)
        {
            if (atof(argv[i]) >= *avg)
            {
                printf("%s, %.2f\n", argv[i - 2], atof(argv[i]));
            }
        }
    }
    printf("Average grade: %.2f\n", *avg);
    length = NULL;
    free(length);
    return 0;
}
