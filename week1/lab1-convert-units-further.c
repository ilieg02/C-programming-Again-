/*
Program: lab1-convert-units.c
Author: Ilie Gabuja
Input: Centimetres
Output: converts cm in inch
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lower_bound = 30;
    float upper_bound = 50;
    float inch = 2.54;
    while (lower_bound < upper_bound)
    {
        if (lower_bound == 34 || lower_bound == 39 || lower_bound == 44 || lower_bound == 49)
        {
            printf("%.2f\n", lower_bound / inch);
            lower_bound++;
        }

        else
        {
            printf("%.2f ", lower_bound / inch);
            lower_bound++;
        }
    }

    return (0);
}