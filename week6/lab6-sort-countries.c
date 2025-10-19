/*Program: lab6-sort-countries.c
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
    int i = 0;
    while (i < length)
    {
        int p = i;
        int j = p + 1;
        while (j < length)
        {
            if (c[j].population > c[p].population)
            {
                p = j;
            }
            j++;
        }
        Country temp = *(c + i);
        *(c + i) = *(c + p);
        *(c + p) = temp;
        i++;
    }
    printf("Country			Capital			Size			Population\n");
    for (int i = 0; i < length; i++)
    {
        Country *pc = (c + i);
        printf("%s\t\t\t", pc->name);
        printf("%s\t\t\t", pc->capital);
        printf("%d\t\t\t", atoi(pc->size));
        printf("%.2f\n", pc->population);
    }
    return 0;
}