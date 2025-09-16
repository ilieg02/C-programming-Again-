/*
Program: lab1-rugby.c
Author: Ilie Gabuja
Input: four inputs (try, conversion, penalty, drop-goal) from command lines
Output: Calculate the total point and Print the total point
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int calc;
    calc = atoi(argv[1]) * 5 + atoi(argv[2]) * 2 + atoi(argv[3]) * 3 + atoi(argv[4]) * 3;
    printf("%d\n", calc);
    return (0);
}