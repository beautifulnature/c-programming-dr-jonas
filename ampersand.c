/* ampersand.c */
#include <stdio.h>

int addition(int a, int b){
    
    int result;
    result = a + b;

    return result;
}

void add(int a, int b, int *target){
    
    *target = a + b; 
    return; 
}

int main(){
    
    int x, y, answer;
    
    x = 5;
    y = 15;

//    answer = addition(x, y);
//    printf("%d\n", answer);

    add(x, y, &answer);
    printf("%d\n", answer);

    return 0;
}
