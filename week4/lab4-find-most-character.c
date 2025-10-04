/*
Program: lab4-find-most-character.c
Author: Ilie Gabuja
*/

#include <stdio.h>
#include <string.h>

char cou(char *pmaxch, char stringer[], int *pcount) // char function for pointer to char return!
{

    for (int i = 0; i < strlen(stringer); i++)
    {
        char ch = stringer[i];
        int asciich = ch;
        char diff;
        if (asciich >= 65 && asciich <= 90)
        {
            diff = (char)(asciich + 32); // to convert from ascii code to char just use char in front of it
        }
        else if (asciich >= 97 && asciich <= 122)
        {
            diff = (char)(asciich - 32);
        }
        int count = 0;
        for (int j = 0; j < strlen(stringer); j++)
        {
            if (stringer[j] == ch || stringer[j] == diff)
            {
                count += 1;
            }
        }
        if (count > *pcount)
        {
            *pcount = count;
            *pmaxch = stringer[i];
        }
    }
}

int main(int argc, char *argv[])
{
    char another[50];
    strcpy(another, argv[1]);
    char stringer[50];
    int i = 0;
    int j = 0;
    while (i < strlen(another)) // hahaha take out the white spaces!!!, overwise you maxch will be just a white space!
    {
        if (another[i] != ' ')
        {
            stringer[j] = another[i];
            j++;
        }
        i++;
    }
    int count = 0;
    char maxch = stringer[0];      // initialize the variable
    char *pmaxch = &maxch;         // memory address for the variable
    int *pcount = &count;          // of course the count
    cou(pmaxch, stringer, pcount); // call the function with the address of the maxch and pcount and our list!
    printf("%c\n", maxch);
    return 0;
}