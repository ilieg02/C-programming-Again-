/*
 circle-area-further.c
 author <Ilie Gabuja>
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h>
/* contains functions we may need*/

/* Function: Main
 parameters: int argc (argument count)
 char *argv[] an array of command-line arguments
description:  Takes a single argument and computes area of circle
 */

int main()
{
    /* variable initialisation */
    int radius;
    float area;
    float PI = 3.14;
    /* all command-line arguments come in as character strings, so atoi turns them into ints*/

    while (radius <= 0)
    radius = radius * radius; /* radius squared */

    area = radius * PI; /* calculate area of circle */

    /* print to two decimal places*/
    printf("%.2f\n", area); /* We only want to show only two values to the right of the decimal point*/
                            /*     printf("%9.2f\n", area); We want to set the width of the shown number = 9. If the total number of digits < 9, spaces will be shown before the number*/

    return (0); /* exit correctly*/
} /* end program*/