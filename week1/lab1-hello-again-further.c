/*
Program: lab1-hello_again.c
Author: Ilie Gabuja
Input: A full Name
Output: Print out the given name
*/
#include <stdio.h>

int main()
{
    char name[20];
    printf("Hello What is your Name?\n");
    scanf("%s", &name);
    printf("Hello %s\n", name);
    return 0;
}