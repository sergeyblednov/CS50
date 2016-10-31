#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x = 0;
    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        x = GetFloat();
    } while (x < 0 || x > 23);
    
    int s = roundf(x * 100.0);
    int coins = 0;
    int q = 0;
    int d = 0;
    int n = 0;
    int c = 0;
    q = (int)(s / 25);
    s = s - q * 25;
    d = (int)(s / 10);
    s = s - d * 10;
    n = (int)(s / 5);
    s = s - n * 5;
    c = s;
    coins = q + d + n + c;
    printf("%d\n", coins);
}