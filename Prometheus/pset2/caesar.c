#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main (int argc, char* argv[])
{
    if (argc != 2) {
        printf("wrong argument! try again.\n");
        return 1; 
    }
    
    int k = atoi(argv[1]);
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++) {
        char c = s[i];
        if (isalpha(c)) {
            int start = 96;
            if (s[i] < 97) { 
                start = 64;
            }
            s[i] = start + (((s[i] - start) + (k % 26))) % 26;
        }
    }
           
    printf("%s\n", s);
    return 0;
} 
