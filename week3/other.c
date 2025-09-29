#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char str2[1000];
    fgets(str, 1000, stdin);
    int length = strlen(str);
    int i = 1;
    int j = 0;
    while (i < length)
    {
        if (i - 1 != i)
        {
            str2[j] = str[i - 1];
            j++;
            i++;
        }
    }
    printf("%s\n", str2);
}