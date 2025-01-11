#include <stdio.h>

int main(){
    
    int x = 10;
    char y = 'a';
    int *p = &x;
    char *c = &y;

    printf("int x = %d\n", x);
    printf("char y = %c\n", y);

    printf("address of x is %p\n", &x);
    printf("address of y is %p\n", &y);
 
    printf("pointer p contains address of x %p\n", p);
    printf("pointer c contains address of y %p\n", c);

    printf("address of pointer p is %p\n", &p);
    printf("address of pointer c is %p\n", &c);
 
    printf("pointer p points to the data of x = %d\n", *p);
    printf("pointer c points to the data of y = %c\n", *c);
    printf("%d\n", *p);

    p++;
    printf("Value of pointer p after increment: %p\n", (void *)p);
    printf("%d\n", *p);

    return 0;
}
