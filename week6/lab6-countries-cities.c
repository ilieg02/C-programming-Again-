/*Program: lab6-sort-countries.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;

// no need for another structs if we can find the largest city in a go 
struct Country
{
    char *name;
    char *name_city;
};

int main(int argc, char *argv[])
{
    int length = (argc - 1) / 7;
    Country c[length];
    int j = 0;
    for (int i = 1; i < argc; i += 7) // skip to the next country
    {
        c[j].name = argv[i];
        int max_size = 0;
        char *max_name;
        for (int k = i + 2; k < i + 7; k += 2) // skip to the next cities
        {
            if (atoi(argv[k]) > max_size)
            {
                max_size = atoi(argv[k]);
                max_name = argv[k - 1];
            }
            c[j].name_city = max_name;
        }
        j++;
    }
    for (int i = 0; i < length; i++)
    {
        Country *pc = (c + i);
        printf("%s: %s\n", pc->name, pc->name_city);
    }
    return 0;
}
