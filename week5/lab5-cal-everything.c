/*Program: lab5-cal-everything.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum(int, int);
double difference(int, int);
double product(int, int);
double devision(int, int);
double power(int, int);
double loga(int, int);

int main(int argc, char *argv[])
{
    double results[6]; // results list
    double (*pfunction[])(int, int) = {sum, difference, product, devision, power, loga};
    int nr1 = atoi(argv[1]);
    int nr2 = atoi(argv[2]);
    for (int i = 0; i < 6; i++)
    {
        *(results + i) = (*(pfunction + i))(nr1, nr2); // then add to the results!
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f\n", *(results + i)); // equivalent to results[i]
    }
    return 0;
}

double sum(int x, int y)
{
    return x + y;
}
double difference(int x, int y)
{
    return x - y;
}

double product(int x, int y)
{
    return x * y;
}
double devision(int x, int y)
{
    return (double)x / y; // change answer to a floating one!
}
double power(int x, int y)
{
    return pow(x, y);
}

double loga(int x, int y)
{
    return log(x) + log(y);
}