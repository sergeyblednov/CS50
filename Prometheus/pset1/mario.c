#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = 0;
    do {
        printf("height: ");
        x = GetInt();
    } while (x < 0 || x > 23);
    
    if (x > 0 && x <= 23)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0, lenght = x + 1; j < lenght; j++)
            {
                if (j < x - i - 1)
                {
                    printf(" ");
                } 
                else 
                {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
}
