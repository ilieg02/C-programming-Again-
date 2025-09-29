#include <stdio.h>
/*count the length of our string*/
int main()
{
    char name[20];
    fgets(name, sizeof(name), stdin);
    int c = 0;
    while (name[c] != '\0')
    {
        ++c;
    }
    c -= 1;
    printf("%d\n", c);
    return 0;
}
