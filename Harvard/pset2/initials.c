#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	string name = GetString();
	
    int i = 0;
    int count = strlen(name);
    while (i < count) {
        if (name[i] != ' ') {
           printf("%c", toupper(name[i]));
           do {
               i++;
           } while (name[i] != ' ' && i < count);
        } else {
            i++;
        }
    }
	printf("\n");
}