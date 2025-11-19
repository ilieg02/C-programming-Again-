/*
Name: Ilie Gabuja
Task name: lab10-load-binary.c
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pfile = fopen("studentBinary.bin", "rb");


    int nameLen, collegeLen;
    char *name, *college;
    int age;
    float grade;

    fread(&nameLen, sizeof(int), 1, pfile);
    name = (char *)malloc(nameLen + 1);
    fread(name, sizeof(char), nameLen, pfile);
    name[nameLen] = '\0';

    fread(&collegeLen, sizeof(int), 1, pfile);
    college = (char *)malloc(collegeLen + 1);
    fread(college, sizeof(char), collegeLen, pfile);
    college[collegeLen] = '\0';

    fread(&age, sizeof(int), 1, pfile);
    fread(&grade, sizeof(float), 1, pfile);

    fclose(pfile);

    printf("Name: %s\n", name);
    printf("College: %s\n", college);
    printf("Age: %d\n", age);
    printf("Grade: %.2f\n", grade);

    free(name);
    free(college);

    return 0;
}
