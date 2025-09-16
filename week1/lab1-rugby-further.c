/*
Program: lab1-rugby-further.c
Author: Ilie Gabuja
Input: four inputs (try, conversion, penalty, drop-goal) from command lines
Output: Calculate the total point and Print the total point
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int try, conversion, penalty, drop_goal;
    int i = 0;
    int calc;
    while (i < 4)
    {
        if (i == 0)
        {
            printf("Please enter trys: \n");
            scanf("%d", &try);
            if (try < 0 && try != 0)
            {
                printf("Please enter trys again!: \n");
                scanf("%d", &try);
            }
            else
            {
                i++;
            }
        }
        else if (i == 1)
        {
            printf("Please enter conversions: \n");
            scanf("%d", &conversion);
            if (conversion < 0 && conversion != 0)
            {
                printf("Please enter conversions again!: \n");
                scanf("%d", &conversion);
            }
            else
            {
                i++;
            }
        }
        else if (i == 2)
        {
            printf("Please enter penaltys: \n");
            scanf("%d", &penalty);
            if (penalty < 0 && penalty != 0)
            {
                printf("Please enter penaltys again!: \n");
                scanf("%d", &penalty);
            }
            else
            {
                i++;
            }
        }
        else if (i == 3)
        {
            printf("Please enter drop_goals: \n");
            scanf("%d", &drop_goal);
            if (drop_goal < 0 && drop_goal != 0)
            {
                printf("Please enter drop_goals again!: \n");
                scanf("%d", &drop_goal);
            }
            else
            {
                i++;
            }
        }
    }
    calc = try * 5 + penalty * 3 + conversion * 2 + drop_goal * 3;
    printf("%d", calc);
    return (0);
}

/*Beautiful !!
Thank you*/