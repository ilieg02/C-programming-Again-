/*
Program: lab4-count-character.c
Author: Ilie Gabuja
Output: Count the character occurence of the first argument into the next one
*/
#include <stdio.h>
#include <string.h>

int alri(char ch, char stre[], int *pcount, char diff) // so when passed args then we put our *pcount to not have to return anything after
{
    for (int i = 0; i < strlen(stre); i++)
    {
        if (stre[i] == ch || stre[i] == diff)
        {
            *pcount += 1;
        }
    }
}

int main(int argc, char *argv[])
{
    char ch = argv[1][0]; // this will be the first argument and the first index of that string!!
    char stre[50];        // this is now our second string !
    int asciich = ch;     // get ascii code for the character
    char diff;            // then initialise our other variable so if lower then it will be upper overwise lower
    if (asciich >= 65 && asciich <= 90)
    {
        diff = (char)(asciich + 32); // to convert from ascii code to char just use char in front of it
    }
    else if (asciich >= 97 && asciich <= 122)
    {
        diff = (char)(asciich - 32);
    }
    strcpy(stre, argv[2]);        // use this to copy the argv[2] string into our string in main!
    int count = 0;                // keep count of occurences
    int *pcount = &count;         // memory address of the count variable
    alri(ch, stre, pcount, diff); // then we call our function , note pcount is the memory adress!
    printf("%d\n", count);
    return 0;
}