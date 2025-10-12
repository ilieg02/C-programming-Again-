/*Program: lab5-get-a-country.c
Author: Ilie Gabuja
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Country Country;
struct Country
{
    char *name;
    char *capital;
    char *pop;
    char *size;
};
int main(int argc, char *argv[])
{
    Country country1;
    country1.name = argv[1];
    country1.capital = argv[2];
    country1.pop = argv[3];
    country1.size = argv[4];
    printf("%s\n", country1.name);
    printf("%s\n", country1.capital);
    printf("%s million people\n", country1.pop);
    printf("%s km2\n", country1.size);
}