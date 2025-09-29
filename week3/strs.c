#include <string.h>
#include <stdio.h>

int main()
{
    char name1[20];
    char name2[20];
    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name2), stdin);
    int ok = strlen(name1) - 1;
    printf("%d", ok);
    return 0;
}