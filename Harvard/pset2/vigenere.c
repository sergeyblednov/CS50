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
    
    string k = argv[1];
    for (int i = 0, n = strlen(k); i < n; i++) {
        if(!isalpha(k[i])) {
            printf("wrong argument! try again.\n");
            return 1; 
        }
    }
    
    string s = GetString();
    int letter = 0;
    for (int i = 0, n = strlen(s); i < n; i++) {
        char c = s[i];
        if (isalpha(c)) {
            int j = letter % strlen(k);
            int delta = k[j] > 'Z' ? k[j] - 'a' : k[j] - 'A';
            int start = s[i] > 'Z' ? 'a' : 'A';
            s[i] = start + (s[i] - start + delta) % 26;
            letter++;
        }
    }
    printf("%s\n", s);
    return 0;
} 