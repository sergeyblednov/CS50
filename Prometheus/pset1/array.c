#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N = 10;

    int *x = malloc(sizeof(int) * N);

    int y[N];

    for (int i = 0; i < N; ++i)
    {
        x[i] = i;
        printf("Element %d: %d\n", i, x[i]);
    }
    printf("%p: %lu bytes \n", x, sizeof(x));
    printf("%p: %lu bytes \n", y, sizeof(y));
}
