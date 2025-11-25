#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen("numbers.txt", "r");
    int sume = 0;
    int avg = 0;
    int even = 0;
    int odd = 0;
    int i = 0;
    char line[256];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        char *ok;
        strcpy(ok, line);
        if (atoi(ok) % 2 == 0)
        {
            even++;
        }
        else if (atoi(line) % 2 == 1)
        {
            odd++;
        }
        i++;
    }
    avg = sume / i;
    printf("Numbers processed: %d\n", i);
    printf("Sum: %d\n", sume);
    printf("Average: %d\n", avg);
    printf("Even Numbers: %d\n", even);
    printf("Odd Numbers: %d\n", odd);
    fclose(file);
    return 0;
}