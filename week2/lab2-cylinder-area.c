/*
lab2-cylinder-area.c
author Ilie Gabuja
Function: Main
parameters: int argc (argument count)
char *argv[] an array of command-line arguments
description:  Takes a single argument and computes area of circle
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 0)
    {
        printf("No input given!\n");
        return 0;
    }
    else if (argc == 1)
    {
        printf("Two arguments needed!\n");
        return 0;
    }
    else if (argc == 2)
    {
        if ((atoi(argv[1]) < 0) || (atoi(argv[2]) < 0))
        {
            printf("The radious or height cannot be negative!\n");
            return 0;
        }
    }
    else
    {
        double radius = atoi(argv[1]);
        double height = atoi(argv[2]);
        double PI = 3.1415;
        double area;
        area = (2 * PI * (radius * radius)) + (2 * PI * radius * height);
        printf("%.2f\n", area);
        return 0;
    }
}
