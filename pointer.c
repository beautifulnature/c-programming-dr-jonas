/* pointer.c */
#include <stdio.h>
#include <string.h>

int main(){
   
    char str[32];
    char *p;

    strncpy(str, "i like apples", 31); 
    p = str;

    printf("%s\n", p);
    printf("%c\n", *p);

    p++;
    printf("%s\n", p);

    printf("address of str: %p\n", (void *)str);
    printf("address of pointer p: %p\n", (void *)&p);

    return 0;
}
