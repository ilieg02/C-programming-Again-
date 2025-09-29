/*
Task: lab3-calculator.c
Name: Ilie Gabuja
Functions: main, divi, mp, add, powe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float add(float one, float two)
{
    return one + two;
}

float mp(float one, float two)
{
    return one * two;
}

void divi(float one, float two)
{
    if (two != 0 && one != 0)
    {
        float ok = one / two;
        printf("%.6f\n", ok);
    }
    else
    {
        printf("invalid\n");
    }
}

int main(int argc, char *argv[])
{
    float one = atof(argv[2]);
    float two = atof(argv[3]);
    if (strcmp(argv[1], "multiply") == 0)
    {
        float ok = mp(one, two);
        printf("%.6f\n", ok);
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        divi(one, two);
    }
    else if (strcmp(argv[1], "add") == 0)
    {
        float adder = add(one, two);
        printf("%.6f\n", adder);
    }
    return 0;
}