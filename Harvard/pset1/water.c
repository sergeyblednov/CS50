#include <stdio.h>
#include <cs50.h>

int main ()
{
    int m;
    printf("minutes: ");
    do {
        m = GetInt();
    } while (m < 0);
    printf("bottles: %d\n", m * 12);
    return 0;
}