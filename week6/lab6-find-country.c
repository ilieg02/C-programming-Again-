/*Program: lab6-find-country.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;
struct Country
{
    char *name;
    char *capital;
    float population;
    char *size;
};

int main(int argc, char *argv[])
{
    int length = ((argc - 1) / 4);
    Country c[length];
    int j = 0;
    for (int i = 0; i < argc - 1; i += 4)
    {
        Country *pc = (c + j);
        pc->name = argv[i + 1];
        pc->capital = argv[i + 2];
        pc->population = atof(argv[i + 3]);
        pc->size = argv[i + 4];
        j += 1;
    }
    printf("Country			Capital			Size			Population\n");
    for (int k = 0; k < length; k++)
    {
        Country *pc = (c + k);
        if (atoi(pc->size) <= 100000)
        {
            printf("%s\t\t\t", pc->name);
            printf("%s\t\t\t", pc->capital);
            printf("%d\t\t\t", atoi(pc->size));
            printf("%.2f\n", pc->population);
        }
    }
    return 0;
}