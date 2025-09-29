/*
Task: lab3-string-reverse.c
Name: Ilie Gabuja
Functions: main, rever*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reversed(int length, char firstone[])
{
    char final[50];
    for (int i = 0; i < length + 1; i++)
    {
        final[i] = firstone[length - 1 - i];
    }
    final[length] = '\0';
    printf("%s\n", final);
}

int main(int argc, char *argv[])
{
    char firstone[50];
    strcpy(firstone, argv[1]);
    int length = strlen(firstone);
    reversed(length, firstone);
    return 0;
}