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
    
//    string k = argv[1];
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++) {
        char c = s[i];
        if (isalpha(c)) {
            int start = (int)'a';
            if (s[i] <= 'a') { 
                start = 'A';
            }
          //  int j = i % strlen(k);
            s[i] = (s[i] + 0) % ((int)'z' - (int)'a' - 1);
        } else if (c != ' ') { 
            printf("wrong argument! try again.\n");
            return 1;
        }
    }
           
    printf("%s\n", s);
    return 0;
} 
