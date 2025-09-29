#include <stdio.h>

int triple(int *age)
{
    *age = *age * 3; // another one!
}

int main()
{
    int age = 19;
    triple(&age);
    printf("%d\n", age);
    return 0;
}