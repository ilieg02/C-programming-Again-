/*Program: lab5-average-population.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct country country;

struct country
{
    char *name;
    char *cap;
    double pop;
    char *size;
};

double avg(double total, int length)
{
    return total / length;
}

int main(int argc, char *argv[])
{
    country c[(argc - 1) / 4];
    int j = 0;
    int length = ((argc - 1) / 4);
    double total = 0;
    for (int i = 0; i < argc - 1; i += 4)
    {
        c[j].name = argv[i + 1];
        c[j].cap = argv[i + 2];
        c[j].pop = atof(argv[i + 3]);
        c[j].size = argv[i + 4];
        j += 1;
    }
    printf("Country			Capital			Size			Population\n");

    for (int i = 0; i < (argc - 1) / 4; i++)
    {
        printf("%s\t\t\t%s\t\t\t%s\t\t\t%.2f\n", c[i].name, c[i].cap, c[i].size, c[i].pop);
    }
    for (int i = 0; i < ((argc - 1) / 4); i++)
    {
        total += c[i].pop;
    }
    printf("Population average: %.2f\n", avg(total, length));
    return 0;
}
