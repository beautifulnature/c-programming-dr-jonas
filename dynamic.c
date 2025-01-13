#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[32];
    char *surname;

    surname = malloc(32);

    printf("What is your name?\n");
    scanf("%31[^\n]", name);
    printf("Hello %s\n", name);
    
    // Clear the input buffer to avoid reading leftover characters
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Discard remaining characters until newline

    printf("What is your surname?\n");
    scanf("%31[^\n]", surname);
    printf("Hello, your surname is %s\n", surname);

    free(surname);
    
    return 0;
}
